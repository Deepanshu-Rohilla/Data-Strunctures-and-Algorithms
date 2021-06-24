Parenthesis Checker
https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1
class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        int n = x.size();
        for(int i=0;i<n;i++){
            if(s.empty()){
               s.push(x[i]); 
            }
            else{
                if((s.top()=='[' && x[i] == ']') || (s.top()=='(' && x[i] == ')') || s.top()=='{' && x[i] == '}'){
                   s.pop(); 
                }
                else{
                    s.push(x[i]);
                }
            }
        }
        return s.empty();
    }

};
