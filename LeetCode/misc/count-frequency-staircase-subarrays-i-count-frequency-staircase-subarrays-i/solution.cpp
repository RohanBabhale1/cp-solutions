class Solution {
public:
    int countStaircase(vector<int>& nums) {
        int r = 0;
        int n = nums.size();
        static int c[100001];
        for(int i =0;i<n;i++){
            int o[64],k=0;
            for(int j=i;j<n;j++){
                int x=nums[j];
                if(c[x]==0){
                    o[k++]=x;
                    if(k*(k+1)/2>n) break;
                }
                c[x]++;
                if(j-i+1!=k*(k+1)/2) continue;
                int l=0;
                while(l<k&&c[o[l]]==l+1) l++;
                if(l==k) r++;
            }
            for(int l=0;l<k;l++) c[o[l]]=0;
        }
        return r;
    }
};
