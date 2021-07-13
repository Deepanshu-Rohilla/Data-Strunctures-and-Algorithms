Element with left side smaller and right side greater 
https://practice.geeksforgeeks.org/problems/unsorted-array4925/1
int findElement(int arr[], int n) {
    int leftLarge[n];
    int rightSmall[n];
    leftLarge[0] = arr[0];
    rightSmall[n-1] = arr[n-1];
    for(int i=1;i<n;i++){
        leftLarge[i] = max(leftLarge[i-1], arr[i]);
    }
    for(int i=n-2;i>-1;i--){
        rightSmall[i] = min(rightSmall[i+1], arr[i]);
    }
    int ans=-1;
    for(int i=1;i<n-1;i++){
        if(leftLarge[i-1]<=arr[i] && rightSmall[i+1]>=arr[i]){
            ans = arr[i];
            break;
        }
    }
    return ans;
}
