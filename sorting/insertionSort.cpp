#include <iostream>
using namespace std;

void insertionSort(int ar[], int n){
    for(int i=0;i<n;i++){
        int j=i-1;
        int key = ar[i];
        while(j>0 && ar[j]>key){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = key;
    }
}

int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    insertionSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

    return 0;
}