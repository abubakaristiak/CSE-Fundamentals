#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool vis[N];
bool pathVisit[N];
bool ans;
int parentArray[N];

void dfs(int parent){
    vis[parent] = true;
    pathVisit[parent] = true;

    for(int child : adj[parent]){
        if(pathVisit[child]){
            ans = true;
        }
        if(!vis[child]){
            dfs(child);
        }
    }
}
int main()
{
    int n,e;
    cin>> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);

    }
    memset(vis, false, sizeof(vis));
    memset(pathVisit, false, sizeof(pathVisit));
    ans = false;

    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    if(ans) cout << "cycle ache wazidar kache.."<< endl;
    else cout << "cycle nai wazidar kache.."<< endl;
    return 0;
}