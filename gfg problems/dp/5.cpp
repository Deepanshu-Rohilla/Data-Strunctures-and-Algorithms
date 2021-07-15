Longest Common Subsequence
https://practice.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1#
class Solution
{
    public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        int n = x;
        int m = y;
        string A = s1;
        string B = s2;
        int dp[n+1][m+1];
        for(int i=0;i<m+1;i++){
            dp[0][i] = 0;
        }
        for(int i=0;i<n+1;i++){
            dp[i][0] = 0;
        }
        for(int i = 1;i<n+1;i++){
            for(int j = 1;j<m+1;j++){
                int m = max(dp[i-1][j], dp[i][j-1]);
                if(A[i-1]==B[j-1]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else{
                    dp[i][j] = m;
                }
            }
        }
        return dp[n][m];
    }
}; 
