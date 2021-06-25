Rightmost different bit 
https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1
class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int n1 = m^n;
        return log2(n1&-n1) + 1;
    }
};
