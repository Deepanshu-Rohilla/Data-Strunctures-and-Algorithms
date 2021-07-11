Minimum Swaps to Sort
https://practice.geeksforgeeks.org/problems/minimum-swaps/1#
class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 
	int minSwaps(vector<int>&nums)
	{
	    int n = nums.size();
    	pair<int, int> arrPos[n];
        for (int i = 0; i < n; i++){
            arrPos[i].first = nums[i];
            arrPos[i].second = i;
        }
        sort(arrPos, arrPos + n);
        vector<bool>visited(n,false);
        int ans=0;
        for(int i=0;i<n;i++){
            if(visited[i] || arrPos[i].second==i){
                continue;
            }
            else{
                int size=0;
                int j = i;
                while(!visited[j]){
                    visited[j] = true;
                    size++;
                    j = arrPos[j].second;
                }
                if(size>0){
                    ans+=(size-1);
                }
            }
        }
        return ans;
    }
};
