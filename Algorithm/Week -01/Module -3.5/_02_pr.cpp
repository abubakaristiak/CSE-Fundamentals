#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10005];
void dfs(int src){
    vis[src] = true;
    for(int child : v[src]){
        if(vis[child] == false){
            dfs(child);
        }
    }
}
int main()
{
    int n,e; 
    cin >> n >> e;

    while (e--)
    {
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    
    int component = 0; 
    for(int i=0; i<n; i++){
        if(vis[i] == false){
            dfs(i);
            component++;
        }
    }
    cout << component <<endl;
    return 0;
}