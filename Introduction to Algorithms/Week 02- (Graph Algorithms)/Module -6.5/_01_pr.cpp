// TODO: https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
bool ans;
vector<bool> vis;
vector<int> parentArray;

void dfs(int parent, vector<int> adj[])
{
    vis[parent] = true;
    for(int child : adj[parent]){
        if(vis[child] == true && child != parentArray[parent]){
            ans = true;
        }
        if(vis[child] == false) {
            parentArray[child] = parent;
            dfs(child, adj);
        }
    }
}
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        ans = false;
        vis.assign(V, false);
        parentArray.assign(V, -1);
        
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
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends