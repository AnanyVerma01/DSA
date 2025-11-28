class Solution {
public:
    int dp[101][101][201];
    bool solve(string& s1, string& s2, string& s3, int i, int j, int k, int m, int n, int N)
    {
        if(i==m && j==n && k==N) return true;

        if(k>=N) return false;

        if(dp[i][j][k]!=-1){
            return dp[i][j][k];
        }

        bool result = false;

        if(s1[i]==s3[k])
        {
            result = solve(s1,s2,s3,i+1,j,k+1,m,n,N);

            if(result) return dp[i][j][k]=true;
        }

        if(s2[j]==s3[k])
        {
            result = solve(s1,s2,s3,i,j+1,k+1,m,n,N);
        }

        return dp[i][j][k]=result;
    }

    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.size(), n=s2.size(), N=s3.size();
        memset(dp,-1,sizeof(dp));
        return  solve(s1,s2,s3,0,0,0,m,n,N);
    }
};