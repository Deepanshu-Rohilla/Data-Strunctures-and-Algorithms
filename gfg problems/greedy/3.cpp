Maximize Toys
https://practice.geeksforgeeks.org/problems/maximize-toys0331/1#
class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        int i=0;
        for(i=0;i<N;i++){
            if(K-arr[i]>=0){
                K = K-arr[i];
            }
            else{
                break;
            }
        }
        return i;
    }
};
