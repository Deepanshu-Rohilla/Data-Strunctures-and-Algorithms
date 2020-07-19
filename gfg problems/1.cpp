// Link to the question:
//  "https://www.geeksforgeeks.org/count-number-nodes-given-level-using-bfs/"

// Count the number of nodes at given level in a tree using BFS.
// Given a tree represented as undirected graph.
// Count the number of nodes at given level l.
//  It may be assumed that vertex 0 is root of the tree.
#include <iostream>
#include <list>
using namespace std;
class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int u, int w)
    {
        adj[u].push_back(w);
    }
    int BFS(int s, int l)
    {
        bool *visited = new bool[V];
        int level[V];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
            level[i] = 0;
        }
        list<int> queue;
        visited[s] = true;
        queue.push_back(s);
        level[s] = 0;
        while (!queue.empty())
        {
            s = queue.front();
            queue.pop_front();
            for (auto i = adj[s].begin(); i != adj[s].end(); i++)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    queue.push_back(*i);
                    level[*i] = level[s] + 1;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < V; i++)
        {
            if (level[i] == l)
            {
                count++;
            }
        }
        return count;
    }
};

int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 5);

    int level = 2;

    cout << g.BFS(0, level);

    return 0;
}