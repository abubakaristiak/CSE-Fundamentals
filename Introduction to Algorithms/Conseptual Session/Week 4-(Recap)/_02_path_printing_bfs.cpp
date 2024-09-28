#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
int parent[N];
vector<int> adj[N];

void bfs(int s){
    vis[s] = true;
    queue<int> q;
    q.push(s);
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child : adj[par]){
            if(!vis[child]){
                q.push(child);
                parent[child] = par;
                vis[child] = true;
            }
        }
    }
    
}
int main()
{
    int n,e;
    cin >> n >> e;
    while (e--)
    {
        int a,b; cin >> a>>b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    bfs(1);

    vector<int> path;
    int x = 4;
    while (x != -1)
    {
        path.push_back(x);
        x = parent[x];
    }
    reverse(path.begin(), path.end());
    for(auto val : path){
        cout << val << " ";
    }
    cout << endl;
    
    return 0;
}


/*
input: 
8 9
1 2
2 3
3 4
1 5
5 6
6 4
1 7
7 8
8 4
*/