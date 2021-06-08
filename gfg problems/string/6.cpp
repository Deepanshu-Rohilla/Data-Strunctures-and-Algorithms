Implement strstr
https://practice.geeksforgeeks.org/problems/implement-strstr/1#
int strstr(string s, string x)
{
     int ans = -1;
     int n = s.length();
     int m = x.length();
     int i=0;
     while(i<n-m+1){
         if(s[i]==x[0]){
             int j=0;
             while(s[i+j]==x[j] && j<m){
                 j++;
             }
             if(j==m){
                 ans = i;
                 break;
             }
             else{
                 i++;
             }
         }
         else{
             i++;
         }
     }
     return ans;
}