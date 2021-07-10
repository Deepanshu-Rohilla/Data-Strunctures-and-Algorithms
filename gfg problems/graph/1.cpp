class Solution 
{
    public:
	//Function to return a list containing the DFS traversal of the graph.
	vector<int>dfsOfGraph(int V, vector<int> adj[])
	{
	    bool visited[V];
	    vector<int> ans;
	    for(int i=0;i<V;i++) visited[i] = false;
	    dfs(0,adj,visited,ans);
	    return ans;
	}
	
	void dfs(int v, vector<int> adj[], bool* visited, vector<int> &ans){
	    visited[v] = true;
	    ans.push_back(v);
	    vector<int> neigh = adj[v];
	    for(int i=0;i<neigh.size();i++){
	        if(!visited[neigh[i]]){
	            dfs(neigh[i],adj,visited,ans);
	        }
	    }
	}
};
