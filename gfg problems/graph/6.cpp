Find whether path exist 
https://practice.geeksforgeeks.org/problems/find-whether-path-exist5238/1#
class Solution
{
    public:
    
    bool isSafe(int x,int y,int n){
        if(x<0 || x>n-1){
            return false;
        }
        if(y<0 || y>n-1){
            return false;
        }
        return true;
    }
    //Function to find whether a path exists from the s to dination.
    bool is_Possible(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        bool visited[n][n];
        vector<int> source;
        vector<int> dest;
        pair<int, int> s,d;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j] = false;
                if(grid[i][j]==1){
                    source.push_back(i);
                    source.push_back(j);
                }
                else if(grid[i][j]==2){
                    dest.push_back(i);
                    dest.push_back(j);
                }
            }
        }
        queue<vector<int>> q;
        q.push(source);
        while(!q.empty()){
            vector<int> v = q.front();
            int x = v[0];
            int y = v[1];
            visited[x][y] = true;
            q.pop();
            // cout<<"x is "<<x<<" and y is "<<y<<"\n";
            if(isSafe(x,y+1,n) && grid[x][y+1]!=0 && !visited[x][y+1]){
                q.push({x,y+1});
                visited[x][y+1] = true;
                if(dest[0]==x && dest[1]==y+1){
                    return true;
                }
            }
            if(isSafe(x,y-1,n) && grid[x][y-1]!=0 && !visited[x][y-1]){
                q.push({x,y-1});
                visited[x][y-1] = true;
                if(dest[0]==x && dest[1]==y-1){
                    return true;
                }
            }
            if(isSafe(x+1,y,n) && grid[x+1][y]!=0 && !visited[x+1][y]){
                q.push({x+1,y});
                visited[x+1][y] = true;
                if(dest[0]==x+1 && dest[1]==y){
                    return true;
                }
            }
            if(isSafe(x-1,y,n) && grid[x-1][y]!=0 && !visited[x-1][y]){
                q.push({x-1,y});
                visited[x-1][y] = true;
                if(dest[0]==x-1 && dest[1]==y){
                    return true;
                }
            }
        }
        return false;
    }
};
