class Solution {
public:
    bool isMatch(string s, string p) {
        int n=s.size(),m=p.size(),i,j;
        vector<vector<int>>d(n+1,vector<int>(m+1,0));
        d[n][m]=1;
        for(i=n;i>=0;i--)
        for(j=m-1;j>=0;j--){
            int f=i<n&&(p[j]==s[i]||p[j]=='.');
            if(j+1<m&&p[j+1]=='*')d[i][j]=d[i][j+2]||(f&&d[i+1][j]);
            else d[i][j]=f&&d[i+1][j+1];
        }
        return d[0][0];
    }
};
