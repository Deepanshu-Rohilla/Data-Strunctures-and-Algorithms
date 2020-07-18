#include <iostream>
using namespace std;
int binarySearch(int ar[], int l,int r,int x){
    if(l<=r){
        int mid = (l+r)/2;
        if(ar[mid]==x){
            return mid;
        }
        if(ar[mid]<x){
            return binarySearch(ar, mid+1,r,x);
        }
        else if(ar[mid]>x){
            return binarySearch(ar,l,mid-1,x);
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
}