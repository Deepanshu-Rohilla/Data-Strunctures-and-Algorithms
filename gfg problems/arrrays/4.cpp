Chocolate Distribution Problem
https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
        // a.sort();
        sort(a.begin(), a.end());
        int i=0;
        int j = m-1;
        long long min = 1000000000;
        while(j<n){
            if(a[j]-a[i]<min){
                min = a[j]-a[i];
            }
            i++;
            j++;
        }
        return min;
    
    }   
};