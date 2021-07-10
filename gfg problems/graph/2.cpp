BFS of graph 
https://practice.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
class Solution
{
    public:
    //Function to return Breadth First Traversal of given graph.
	vector<int>bfsOfGraph(int V, vector<int> adj[])
	{
	    bool visited[V];
	    for(int i=0;i<V;i++) visited[i] = false;
	    vector<int>ans;
	    queue<int> q;
	    q.push(0);
	    ans.push_back(0);
	    visited[0] = true;
	    int v;
	    while(!q.empty()){
	        v = q.front();
	        q.pop();
    	    for(int i=0;i<adj[v].size();i++){
    	        if(!visited[adj[v][i]]){
    	            q.push(adj[v][i]);
    	            visited[adj[v][i]] = true;
    	            ans.push_back(adj[v][i]);
    	        }
    	    }
	    }
	    return ans;
	    
	}
};
