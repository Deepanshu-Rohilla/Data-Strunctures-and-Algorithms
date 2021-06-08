Implement Atoi
https://practice.geeksforgeeks.org/problems/implement-atoi/1
class Solution{
    public:
        /*You are required to complete this method */
    int atoi(string str)
    {
        int ans =0;
        bool negate = false;
        int n = str.length();
        int i=0;
        if(str[0]=='-'){
            negate = true;
            i++;
        }
        while(i<n){
            int x = (int)str[i] - 48;
            if(x<0 || x>9){
                return -1;
            }
            ans = ans*10 + x;
            i++;
        }
        return negate ? ans*-1 : ans;
    }
};