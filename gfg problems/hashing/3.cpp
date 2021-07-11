Largest subarray with 0 sum 
https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1
int maxLen(int A[], int n)
{
    unordered_map<int, vector<int>> m;
    vector<vector<int>> ans;
    int sum=0;
    for(int i=0;i<n;i++){
        sum = sum + A[i];
        if(sum==0){
            ans.push_back({0,i});
        }
        if(m.find(sum)!=m.end()){
            vector<int> temp = m[sum];
            for(int x: temp){
                ans.push_back({x+1,i});
            }
        }
        m[sum].push_back(i);
    }
    int ans1=0;
    if(ans.size()==0){
        return 0;
    }
    for(int i=0;i<ans.size();i++){
        int gap = ans[i][1] - ans[i][0];
        ans1 = gap>ans1 ? gap : ans1;
    }
    return ans1+1;
}
