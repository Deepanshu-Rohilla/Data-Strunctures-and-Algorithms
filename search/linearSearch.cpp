#include <iostream>
using namespace std;
int linearSearch(int ar[], int n,int x){
    for(int i=0;i<n;i++){
        if(ar[i]==x){
            return i;
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
    cout<<linearSearch(ar,n,x);
}