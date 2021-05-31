Kadane's Algorithm
https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
class Solution{
    public:
    int maxSubarraySum(int arr[], int n){
        
        int maxsum = 0;
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            if(sum>maxsum){
                maxsum = sum;
            }
            if(sum<0){
                sum = 0;
            }
        }
        return maxsum;
        
    }
};