Bit Difference 
https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1
class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        
        int x = a^b;
        int ans=0;
        while(x>0){
            if(x%2==1){
                ans++;
            }
            x = x/2;
        }
        return ans;
    }
};
