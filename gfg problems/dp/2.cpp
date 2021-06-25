Minimum number of Coins
https://practice.geeksforgeeks.org/problems/-minimum-number-of-coins4426/1#
class Solution{
public:
    vector<int> minPartition(int N)
    {
        // int dp[N+1];
        // dp[1] = 1;
        // dp[2] = 1;
        // dp[5] = 1;
        // dp[10] = 1;
        // dp[20] = 1;
        // dp[50] = 1;
        // dp[100] = 1;
        // dp[200] = 1;
        // dp[500] = 1;
        // dp[2000] = 1;
        // int den[10] = {1,2,5,10,20,50,100,200,500,2000};
        // for(int i=1;i<=N;i++){
        //     dp[i] = INT_MAX;
        //     int coins = INT_MAX;
        //     for(int x=0;x<10;x++){
        //         if(i%x==0){
        //             coins = coins > dp[i/x] + 1 ? dp[i/x] + 1 : coins;
        //         }
        //     }
        // }
        // return dp[N];
        vector<int> ans;
        int den[10] = {1,2,5,10,20,50,100,200,500,2000};
        int index = 9;
        while(N>0){
            if(N>=den[index]){
                ans.push_back(den[index]);
                N = N - den[index];
            }
            else{
                index--;
            }
        }
        return ans;
        
        
    }
};
