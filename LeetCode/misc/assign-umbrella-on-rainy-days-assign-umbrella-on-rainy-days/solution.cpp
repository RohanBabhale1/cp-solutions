class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n = rain.size(), a = 0, b = 0;
        vector<string>v;
        for(int i=0;i<n;i++){
            int x=i<n-1&&rain[i]&&rain[i+1];
            if(!rain[i]){v.push_back("None");}
            else if(!x||a>b){v.push_back("Bob"),b++;}
            else{v.push_back("Alice"),a++;}
        }
        return v;
    }
};
