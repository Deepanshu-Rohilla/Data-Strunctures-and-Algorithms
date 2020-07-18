#include <iostream>
using namespace std;

int binarySearch(int ar[], int l,int r,int x){
    while(l<=r){
        int mid = (l+r)/2;
        if(ar[mid]==x){
            return mid;
        }
        if(ar[mid]<x){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,x;
    cin>>n>>x;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    cout<<binarySearch(ar,0,n-1,x);
    return 0;
}