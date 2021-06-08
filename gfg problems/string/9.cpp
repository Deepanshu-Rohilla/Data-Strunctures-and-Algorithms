Last index of One
https://practice.geeksforgeeks.org/problems/last-index-of-15847/1#
class Solution{
    public:
    int lastIndex(string s) 
    {
        int ans = -1;
        int n = s.length();
        int i =n-1;
        while(i>-1){
            if(s[i]=='1'){
                ans = i;
                return ans;
            }
            i--;
        }
        return ans;
    }

};