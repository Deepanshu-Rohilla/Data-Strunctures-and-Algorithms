Find first set bit 
https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1#
class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        return log2(n&-n) + 1;
        // int total = 0;
        // int ans = 0;
        // while(n>0){
        //     total++;
        //     if(n%2==1){
        //         return total;
        //     }
        //     n = n/2;
        // }
        // return total;
    }
};
