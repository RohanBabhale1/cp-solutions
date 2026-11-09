class Solution {
    // Defines a structure to represent a running job on a server
    struct Job {
        int at;      // The exact timestamp when this server will finish its job and become free
        int server;  // The ID of the server handling this job
        // Default spaceship operator automatically implements all comparison operators (<, >, ==, etc.)
        auto operator<=>(const Job&) const = default;
    };
    // A template alias for an easy-to-use Min-Heap (priority queue that keeps the smallest element at the top)
    template <class T> using MinHeap = priority_queue<T, vector<T>, greater<>>;

public:
    vector<int> busiestServers(int k, vector<int>& arrival, vector<int>& load) {
        // Create a vector tracking the specific request index when a server becomes eligible to take a job
        vector<int> turns(k);
        // Fills the vector with values 0, 1, 2, ..., k-1 (initially, at request 0, server x is available at turn x)
        iota(turns.begin(), turns.end(), 0);  
        
        // Min-heap tracking free servers, ordered by their next available request "turn" index
        MinHeap<int> free(greater<>{},move(turns));  

        // Min-heap tracking busy servers, ordered by their completion time (`at`)
        MinHeap<Job> busy;
        // Vector to count how many requests each of the k servers successfully processed
        vector<int> handled(k);
        
        // Loop through every incoming request using `ssize` to safely get a signed size of the arrival vector
        for (int i = 0; i < ssize(arrival); ++i) {
            // Free up all servers whose current job finishes at or before the current request's arrival time
            while (!busy.empty() && busy.top().at <= arrival[i]) {  
                // Get the ID of the server that just finished its job
                int x = busy.top().server;
                // Remove this job from the busy heap
                busy.pop();
                // Calculate and push the next virtual "turn" index >= i where server x is allowed to pick up a job
                free.push(i + (x - i % k + k) % k);  
            }
            // If there are no servers available in the free heap, this request must be dropped
            if (free.empty()) continue;        
            // Pick the available server with the lowest valid turn index (the closest one matching the round-robin rule)
            int x = free.top() % k;
            // Remove this server from the free heap since it is about to take a job
            free.pop();
            // Add the server to the busy heap with its new completion time (arrival time + duration of the job)
            busy.push({arrival[i] + load[i], x});
            // Increment the counter tracking how many requests this specific server has handled
            ++handled[x];
        }
        
        int most = *max_element(handled.begin(), handled.end());
        vector<int> ans;
        for (int x = 0; x < k; ++x)
            if (handled[x] == most) ans.push_back(x);
        return ans;
    }
};
