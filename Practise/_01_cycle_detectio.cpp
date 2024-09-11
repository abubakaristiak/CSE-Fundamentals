#include<bits/stdc++.h>
using namespace std;
const int N = 1e+5;

vector <int> adj[N];
bool vis[N];

void bfs(int src){
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int par = q.front();
        
    }
    
}

int main()
{
    int n,e; 
    cin >> n >> e;
    while (e--)
    {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    memset(vis, false, sizeof(vis));
    for(int i=0; i<n; i++){
        if(!vis[i]){
            bfs(i);
        }
    }

    return 0;
}