Minimize the sum of product
https://practice.geeksforgeeks.org/problems/minimize-the-sum-of-product1525/1
class Solution{
    public:
    long long int minValue(int a[], int b[], int n)
    {
        sort(a,a+n);
        sort(b,b+n);
        long long int ans = 0;
        for(int i=0;i<n;i++){
            ans= ans + (a[i]*b[n-i-1]);
        }
        return ans;
    }
};
