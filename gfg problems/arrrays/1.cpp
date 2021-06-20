Sort an array of 0s, 1s and 2s
https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
class Solution{
    public:
    void sort012(int a[], int n)
    {
        int b1=0;
        int b2=0;
        int b3=0;
        for(int i=0;i<n;i++){
            if (a[i]==0){
                b1++;
            }
            else if(a[i]==1){
                b2++;
            }
            else{
                b3++;
            }
        }
        for(int i=0;i<b1;i++){
            a[i]=0;
        }
        for(int i=b1;i<b1+b2;i++){
            a[i]=1;
        }
        for(int i=b1+b2;i<n;i++){
            a[i]=2;
        }
        
    }
};
