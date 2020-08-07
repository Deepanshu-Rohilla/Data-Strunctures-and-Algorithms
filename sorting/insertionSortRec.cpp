#include <iostream>
using namespace std;
void insertionSortRec(int ar[], int n){
    if(n<=1){
        return;
    }
    insertionSortRec(ar,n-1);
        int last = ar[n-1];
        int j=n-2;
        while(j>=0 and last<ar[j]){
            ar[j+1] = ar[j];
            j--;
        }
        ar[j+1] = last;
    
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    insertionSortRec(ar,n);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
}