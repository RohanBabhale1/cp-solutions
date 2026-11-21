class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(),V=2000,Q=1e9,r=Q;
        if(n<3){return -1;}
        vector<vector<int>>L(n,vector<int>(V+1,Q)),R(n,vector<int>(V+1,Q));
        for(int v=1;v<=V;v++){L[0][v]=abs(nums[0]-v),R[n-1][v]=abs(nums[n-1]-v);}
        for(int i=1;i<n;i++){
            int m=Q;
            for(int v=1;v<=V;v++){if(m<Q){L[i][v]=abs(nums[i]-v)+m;}m=min(m,L[i-1][v]);}
        }
        for(int i=n-2;i>=0;i--){
            int m=Q;
            for(int v=1;v<=V;v++){if(m<Q){R[i][v]=abs(nums[i]-v)+m;}m=min(m,R[i+1][v]);}
        }
        for(int i=1;i<n-1;i++){
            for(int v=1;v<=V;v++){if(L[i][v]<Q&&R[i][v]<Q){r=min(r,L[i][v]+R[i][v]-abs(nums[i]-v));}}
        }
        return r<Q?r:-1;
    }
};
