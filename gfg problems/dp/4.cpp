0 - 1 Knapsack Problem 
https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
class Solution
{
    public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       int dp[n+1][W+1];
       for(int i=0;i<n+1;i++){
           dp[i][0] = 0;
       }
       for(int i=0;i<W+1;i++){
           dp[0][i] = 0;
       }
       for(int item = 1;item<n+1;item++){
           for(int weight = 1;weight<W+1;weight++){
               int withoutThisItem = dp[item-1][weight];
               int withThisItem = 0;
               int currWeight = wt[item-1];
               if(weight>=currWeight){
                   withThisItem = val[item-1];
                   withThisItem += dp[item-1][weight-currWeight];
               }
               dp[item][weight] = max(withoutThisItem, withThisItem);
           }
       }
       return dp[n][W];
    }
};
