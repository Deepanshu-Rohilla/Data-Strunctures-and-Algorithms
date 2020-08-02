#include <iostream>
using namespace std;

void swap(int *x,int *y){
    int temp = *x;
    *x=*y;
    *y=temp;
}

void bubbleSort(int ar[],int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(ar[i]>ar[i+1]){
            swap(&ar[i],&ar[i+1]);
        }
    }
    bubbleSort(ar,n-1);
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    bubbleSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}