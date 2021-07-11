Shortest Source to Destination Path 
https://practice.geeksforgeeks.org/problems/shortest-source-to-destination-path3544/1
class Solution {
  public:
    bool isSafe(int x,int y, int N, int M){
        if(x<0 || x>N-1){
            return false;
        }
        if(y<0 || y>M-1){
            return false;
        }
        return true;
    }
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        vector<vector<bool>> visited;
        vector<vector<int>> dist;
        for(int i=0;i<N;i++){
            vector<bool> temp(M,false);
            vector<int> dist1(M,INT_MAX);
            visited.push_back(temp);
            dist.push_back(dist1);
        }
        if(A[0][0]==0){
            return -1;
        }
        int ans=0;
        queue<vector<int>> q;
        q.push({0,0});
        dist[0][0] = 0;
        while(!q.empty()){
            vector<int> v = q.front();
            visited[v[0]][v[1]] = true;
            q.pop();
            int x = v[0];
            int y = v[1];
            if(isSafe(x+1,y,N,M) && A[x+1][y]==1 && !visited[x+1][y]){
                q.push({x+1,y});
                visited[x+1][y] = true;
                if(dist[x+1][y]==INT_MAX){
                    dist[x+1][y] = dist[x][y] + 1;
                }
                else{
                    if(dist[x][y] + 1 < dist[x+1][y]){
                        dist[x+1][y] = dist[x][y] + 1;
                    }
                }
            }
            if(isSafe(x-1,y,N,M) && A[x-1][y]==1 && !visited[x-1][y]){
                q.push({x-1,y});
                visited[x-1][y] = true;
                if(dist[x-1][y]==INT_MAX){
                    dist[x-1][y] = dist[x][y] + 1;
                }
                else{
                    if(dist[x][y] + 1 < dist[x-1][y]){
                        dist[x-1][y] = dist[x][y] + 1;
                    }
                }
            }
            if(isSafe(x,y+1,N,M) && A[x][y+1]==1 && !visited[x][y+1]){
                q.push({x,y+1});
                visited[x][y+1] = true;
                if(dist[x][y+1]==INT_MAX){
                    dist[x][y+1] = dist[x][y] + 1;
                }
                else{
                    if(dist[x][y] + 1 < dist[x][y+1]){
                        dist[x][y+1] = dist[x][y] + 1;
                    }
                }
            }
            if(isSafe(x,y-1,N,M) && A[x][y-1]==1 && !visited[x][y-1]){
                q.push({x,y-1});
                visited[x][y-1] = true;
                if(dist[x][y-1]==INT_MAX){
                    dist[x][y-1] = dist[x][y] + 1;
                }
                else{
                    if(dist[x][y] + 1 < dist[x][y-1]){
                        dist[x][y-1] = dist[x][y] + 1;
                    }
                }
            }
        }
        if(dist[X][Y]==INT_MAX){
            return -1;
        }
        return dist[X][Y];
    }
};
