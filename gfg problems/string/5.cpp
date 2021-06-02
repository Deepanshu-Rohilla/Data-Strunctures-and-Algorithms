Remove Duplicates
https://practice.geeksforgeeks.org/problems/remove-duplicates3034/1
class Solution{
public:	
		
	string removeDups(string S) 
	{
	    int ar[26] = {0};
	    int i=0, n = S.length();
	    string ans = "";
	    while(i<n){
	        if(ar[(int)S[i]-97]==0){
	            ans = ans + S[i];
	            ar[(int)S[i]-97] = 1;
	        }
	        i++;
	    }
	    return ans;
	}
};