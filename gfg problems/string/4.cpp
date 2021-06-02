Recursively remove all adjacent duplicates
https://practice.geeksforgeeks.org/problems/recursively-remove-all-adjacent-duplicates0744/1
class Solution{
public:
    string remove(string s){
        int n = s.length();
        bool here = false;
        string ans = "";
        int i=0;
        while(i<n){
            if(i+1<n && s[i]==s[i+1]){
                here = true;
                while(i+1<n && s[i]==s[i+1]){
                    i++;
                }
                i++;
            }
            else{
                ans += s[i];
                i++; 
            }
        }
        if(here){
            return remove(ans);
        }
        return ans;
    }
};