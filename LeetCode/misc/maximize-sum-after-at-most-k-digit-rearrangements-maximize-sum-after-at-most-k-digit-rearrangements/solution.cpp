class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long s = 0;
        for (int &x : nums) {
            s+=x;
            int t[10] = {};
            for(int y = x; y > 0; y/=10) t[y%10]++;
            int v = 0;
            for( int j = 9; j>=0;j--){
                while(t[j]>0){
                    v = v * 10 + j;
                    t[j]--;
                }
            
            }
            x = v - x;
        }
        sort(nums.begin(),nums.end());
        for(int i=nums.size()-1;k>0;k--,i--) {
            s+=nums[i];
        }
        return s;
        
    }
};
