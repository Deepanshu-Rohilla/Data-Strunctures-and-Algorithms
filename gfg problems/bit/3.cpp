Check whether K-th bit is set or not 
https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1#
class Solution
{
    public:
    // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        n = n>>k;
        return n%2==1;
        // OR
        // return (n>>k)&1;
        // Your code here
        // It can be a one liner logic!! Think of it!!
    }
};
