Leaders in an array 
https://practice.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1
class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        int arr[n];
        arr[n-1] = a[n-1];
        for(int i=n-2;i>-1;i--){
            arr[i] = max(arr[i+1], a[i]);
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(a[i]>=arr[i]){
                ans.push_back(a[i]);
            }
        }
        return ans;
        
    }
};
