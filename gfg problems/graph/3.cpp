Implementing Dijkstra Algorithm
https://practice.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1#
class Solution
{
	public:
	
	int minIndex(vector<int>dist, bool inc[], int V){
	    int mi = INT_MAX;
	    int miIndex = 0;
	    for(int i=0;i<V;i++){
	        if(!inc[i]&& dist[i]<mi){
	            mi = dist[i];
	            miIndex=i;
	        }
	    }
	    return miIndex;
	}
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // for(int i=0;i<V;i++){
        //     for(int j=0;j<adj[i].size();j++){
        //         for(int k = 0;k<adj[i][j].size();k++){
        //             cout<<adj[i][j][k]<<" ";
        //         }
        //         cout<<"\n";
        //     }
        //     cout<<"\n";
        // }
        bool inc[V];
        vector<int>dist(V);
        for(int i=0;i<V;i++){
            inc[i]=false;
            dist[i] = INT_MAX;
        }
        dist[S] = 0;
        for(int i=0;i<V-1;i++){
            int index = minIndex(dist, inc,V);
            inc[index] = true;
            for(int x = 0;x<adj[index].size();x++){
                int vertex = adj[index][x][0];
                if(!inc[vertex] && ((dist[index] + adj[index][x][1])<dist[vertex])){
                    dist[vertex] = (dist[index] + adj[index][x][1]);
                }
            }
        }
        return dist;
    }
};
