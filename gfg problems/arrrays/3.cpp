Missing number in array
https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
class Solution{
  public:
    int MissingNumber(vector<int>& array, int n) {
        int sum =0;
        for(int i=0;i<n-1;i++){
            sum = sum + array[i];
        }
        return (n*(n+1))/2 - sum;
    }
};