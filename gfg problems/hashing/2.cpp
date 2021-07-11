Sorting Elements of an Array by Frequency 
https://practice.geeksforgeeks.org/problems/sorting-elements-of-an-array-by-frequency/0
//############################################################################
// SUBISSION BY <<DEEPANSHU ROHILLA>>
//############################################################################

#include <bits/stdc++.h>
using namespace std;

unordered_map<int, int> freq;
bool c(int a, int b){
    if(freq[a]>freq[b]){
        return true;
    }
    else if(freq[b]>freq[a]){
        return false;
    }
    else{
        return a < b;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        unordered_map<int, int> temp;
        freq = temp;
        long n;
        cin>>n;
        long ar[n];
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            ar[i] = x;
            freq[x] = freq[x] + 1;
        }
        sort(ar,ar+n,c);
        for(int i=0;i<n;i++){
            cout<<ar[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
