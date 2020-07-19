#include <iostream>
using namespace std;
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int ar[], int n){
    for(int i=0;i<n-1;i++){
        int minIndex=i;
        for(int j=i+1;j<n;j++){
            if(ar[j]<ar[minIndex]){
                minIndex=j;
            }
        }
        swap(&ar[minIndex], &ar[i]);
    }
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    selectionSort(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<"\n";
}