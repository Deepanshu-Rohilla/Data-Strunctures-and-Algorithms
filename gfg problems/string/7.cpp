class Solution{
    public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans = "";
        char c = arr[0][0];
        int j=0;
        while(true){
            c = arr[0][j];
           for(int i=0;i<N;i++){
                if(arr[i].length()==j){
                    if(ans==""){
                        return "-1";
                    }
                    return ans;
                }
                if(arr[i][j]!=c){
                    if(ans==""){
                        return "-1";
                    }
                    return ans;
                }
            }
            ans+=c;
            j++;
        }
        return ans;
        
    }
};