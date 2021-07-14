Find duplicates in an array 
https://practice.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
    
        for(int i=0;i<n;i++){
            int index = arr[i]%n;
            arr[index]+=n;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(arr[i]/n>1){
                ans.push_back(i);
            }
        }
        if(ans.size()==0){
            ans.push_back(-1);
            return ans;
        }
        return ans;
        }
};
