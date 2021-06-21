Minimum Operations
https://practice.geeksforgeeks.org/problems/find-optimum-operation4504/1#
class Solution{
    public:
    int minOperation(int n)
    {
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        for(int i=2;i<=n;i++){
            dp[i] = INT_MAX;
            if(i%2==0){
                int x = dp[i/2];
                if(x+1<dp[i]){
                    dp[i] = x+1;
                }
            }
            int x = dp[i-1];
            if(x+1<dp[i]){
                dp[i] = x+1;
            }
        }
        return dp[n];
    }
};