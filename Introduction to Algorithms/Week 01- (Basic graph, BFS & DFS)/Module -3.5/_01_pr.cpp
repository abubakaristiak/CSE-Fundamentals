#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10005];
int node_count = 0;
void dfs(int src){

        node_count ++;
        vis[src] = true;
        for(int child : v[src]){
            if(vis[child] == false){
                dfs(child);
            }
        }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src; cin >> src;
    memset(vis, false, sizeof(vis));
    dfs(src);
    cout << node_count << endl;
    
    return 0;
}