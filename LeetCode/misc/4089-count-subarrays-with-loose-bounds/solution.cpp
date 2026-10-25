class Solution {
public:
    long long countSubarrays(vector<int>& v, int a, int b) {
        long long r= 0,c=0;
        for(int x:v){
            if(x>=a && x<=b) c++;
            else c=0;
            r+=c;
        }
        return r;
    }
};
