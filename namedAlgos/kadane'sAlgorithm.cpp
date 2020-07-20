#include <iostream>
#include <climits>
using namespace std;
int kadane(int ar[], int n){
    int maxSoFar= -1000000, currentSum=0;
    for(int i=0;i<n;i++){
        currentSum+=ar[i];
        if(currentSum>maxSoFar){
            maxSoFar = currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
        
    }
    return maxSoFar;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<kadane(ar,n);
}