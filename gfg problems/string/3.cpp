Check if string is rotated by two places
https://practice.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        int n1 = str1.length();
        int n2 = str2.length();
        if(n1!=n2){
            return false;
        }
        if(n1<2){
            return str1==str2;
        }
        
        // case 1
        string temp1, temp2, temp3, temp4;
        temp1 = str1.substr(0,2);
        temp2 = str2.substr(n1-2,2);
        
        temp3 = str1.substr(2,n1-2);
        temp4 = str2.substr(0,n1-2);
        
        if(temp1==temp2 && temp3==temp4){
            return true;
        }
        temp1 = str1.substr(n1-2,2);
        temp2 = str2.substr(0,2);
        
        temp3 = str1.substr(0,n1-2);
        temp4 = str2.substr(2,n1-2);
        
        if(temp1==temp2 && temp3==temp4){
            return true;
        }
        return false;
        
    }

};