Trapping Rain Water 
https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    int trappingWater(int arr[], int n){
        int left[n];
        int right[n];
        left[0] = arr[0];
        for(int i=1;i<n;i++){
            left[i] = max(left[i-1], arr[i]);
        }
        right[n-1] = arr[n-1];
        for(int i=n-2;i>-1;i--){
            right[i] = max(right[i+1], arr[i]);
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans = ans + (min(left[i], right[i]) - arr[i]);
        }
        return ans;
    }
};