Set kth bit 
https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1#
class solution{
    public:
    int setKthBit(int N, int K)
    {
        return N | 1<<K;
    }
};