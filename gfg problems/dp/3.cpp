Count number of hops
https://practice.geeksforgeeks.org/problems/count-number-of-hops-1587115620/1#
class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
    
    if(n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 4;
    }
    long long first = 1;
    long long second =2;
    long long third = 4;
    long long i =4;
    long long sum = first + second + third;
    while(i<n+1){
        sum = (first + second + third)%1000000007;
        first = second;
        second = third;
        third = sum;
        i++;
    }
    return sum;
    }
};
