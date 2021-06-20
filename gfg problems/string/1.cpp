Reverse words in a given string
https://practice.geeksforgeeks.org/problems/reverse-words-in-a-given-string5459/1

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        string temp = "";
        string ans = "";
        int n = S.length();
        int i = n-1;
        while(i>=0){
            if(S[i]=='.'){
                ans = ans + temp;
                ans = ans + '.';
                temp = "";
            }
            else{
                temp = S[i] + temp;
            }
            i--;
        }
        ans = ans + temp;
        return ans;
    } 
};
