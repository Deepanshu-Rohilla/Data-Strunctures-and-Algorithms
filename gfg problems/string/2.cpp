Roman Number to Integer
https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1

#include <unordered_map>
int romanToDecimal(string &str) {
    unordered_map<char, int> roman;
    roman['I'] = 1;
    roman['V'] = 5;
    roman['X'] = 10;
    roman['L'] = 50;
    roman['C'] = 100;
    roman['D'] = 500;
    roman['M'] = 1000;
    int ans =0;
    int i=0;
    int n = str.length();
    while(i<n){
        int pos = roman[str[i]];
        if(i+1==n){
            ans = ans + pos;
            i++;
        }
        else{
            int next = roman[str[i+1]];
            if(pos<next){
                ans = ans + (next - pos);
                i = i + 2;
            }
            else{
                ans = ans + pos;
                i++;
            }
        }
    }
    return ans;
}