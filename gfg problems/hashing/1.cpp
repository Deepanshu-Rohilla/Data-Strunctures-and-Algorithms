Zero Sum Subarrays 
https://practice.geeksforgeeks.org/problems/zero-sum-subarrays1825/1
class Solution{
    public:
    //Function to count subarrays with sum equal to 0.
    ll findSubarray(vector<ll> arr, int n ) {
        unordered_map<int, vector<int>> m;
        int ans=0;
        int sum=0;
        for(int i=0;i<n;i++){
            sum = sum + arr[i];
            if(sum==0){
                ans++;
            }
            if(m.find(sum)!=m.end()){
                ans+=m[sum].size();
            }
            m[sum].push_back(i);
        }
        return ans;
    }
};
