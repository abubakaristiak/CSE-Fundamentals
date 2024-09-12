//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool ans;
vector<bool> vis;
vector<bool> pathVisit;
// Function to detect cycle in a directed graph.
void dfs(int parent, vector<int> adj[])
{
    vis[parent] = true;
    pathVisit[parent] = true;
    
    for(int child : adj[parent]){
        if(pathVisit[child]){
            ans = true;
        }
        if(vis[child] == false) {
            dfs(child, adj);
        }
    }
    pathVisit[parent] = false;
}
// Function to detect cycle in an undirected graph.
bool isCyclic(int V, vector<int> adj[]) {
        // Code here
        ans = false;
        vis.assign(V, false);
        pathVisit.assign(V, false);
        
        for(int i=0; i<V; i++){
            if(!vis[i]){
                dfs(i, adj);
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends