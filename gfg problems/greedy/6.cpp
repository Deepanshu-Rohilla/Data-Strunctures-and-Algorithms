Shop in Candy Store
https://practice.geeksforgeeks.org/problems/shop-in-candy-store1145/1
class Solution{
    public:
    vector<int> candyStore(int candies[], int N, int K)
    {
        int minp =0;
        sort(candies,candies+N);
        int i=0,j=N;
        while(i<j){
            minp = minp + candies[i];
            i++;
            j = j - K;
        }
        int maxp = 0;
        i=-1,j=N-1;
        while(i<j){
            maxp = maxp + candies[j];
            j--;
            i = i + K;
        }
        vector<int> ans;
        ans.push_back(minp);
        ans.push_back(maxp);
        return ans;
    }
};