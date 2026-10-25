class Solution {
public:
    int countMagicalPairs(string s) {
        int n =s.size(),i,j,k,d;
        long long r=0;
        for( int j=0;j<n-1;j++){
            vector<long long> a(27,0),b(27,0);
            vector<int>f(26,0);
            for(int i=j,d=0;i>=0;i--){
                if(!f[s[i]-'a']) f[s[i]-'a'] =1,d++;
                a[d]++;
            }
            vector<int>g(26,0);
            for(int k=j+1,d=0;k<n;k++){
                if(!g[s[k]-'a']) g[s[k]-'a']=1,d++;
                b[d]++;
            }
            for(d=1;d<=26;d++) r+= a[d]*b[d];
        }
        return r;
    }
};
