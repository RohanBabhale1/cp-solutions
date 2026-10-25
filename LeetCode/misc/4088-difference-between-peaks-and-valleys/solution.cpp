class Solution {
public:
    int peakValleyDifference(vector<int>& v) {
        int n = v.size(), r =0, i;
        for (i=1;i<n-1;i++){
            if(v[i]>v[i-1] && v[i]>v[i+1]) r+=v[i];
            else if (v[i]<v[i-1] && v[i]<v[i+1]) r-=v[i];
        }
        return r;
    }
};
