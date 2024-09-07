// https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1?utm_source=geeksforgeeks&utm_medium=ml_article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> bfs_ans;
        vector<bool> vis(V, false);
        queue<int> q;
        
        q.push(0);
        vis[0] = true;
        
        while(!q.empty()){
            int par = q.front();
            q.pop();
            bfs_ans.push_back(par);
            
            for(int child : adj[par]){
                if(!vis[child]){
                    q.push(child);
                    vis[child] = true;
                    
                }
            }
        }
        return bfs_ans;
    }
};