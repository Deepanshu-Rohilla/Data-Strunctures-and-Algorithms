Largest number possible
https://practice.geeksforgeeks.org/problems/largest-number-possible5028/1#
class Solution{
public:
    string findLargest(int N, int S){
        string ans = "";
        if(S==0){
            if(N==1){
                return "0";
            }
            return "-1";
        }
        while(S>9 && N>0){
            ans+='9';
            S-=9;
            N--;
        }
        if(N==0){
            return "-1";
        }
        ans+=to_string(S);
        N--;
        while(N>0){
            ans+='0';
            N--;
        }
        return ans;
        
    }
};
