//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  void dfs(int node, vector<int> adj[], vector<bool> &vis, vector<int> &dfs_ans)
    // Function to return a list containing the DFS traversal of the graph.
    {
        vis[node] = true;
        dfs_ans.push_back(node);
        
        for(int child : adj[node]){
            if(!vis[child]){
                dfs(child, adj, vis, dfs_ans);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> dfs_ans;
        vector<bool> vis(V, false);
        
        dfs(0, adj, vis, dfs_ans);
        
        return dfs_ans;
        
    }
};
