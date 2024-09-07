#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10005];
int level[10005];
int parent_path[10005];
void bfs(int src, int des){
    queue<int> q;
    q.push(src);
    level[src] = 0;
    vis[src] = true;

    while(!q.empty()){
        int par = q.front();
        q.pop();

        for(int child : v[par]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par] + 1;
                parent_path[child] = par;

            }
        }
    }
}
void destination(int src, int des){
    if(src == des){
        cout << 0 << endl;
        return;
    }
    if(parent_path[des] == -1){
        cout << -1 << endl;
        return;
    }

    int x = des;
    vector<int> path;
    while(x != -1){
        path.push_back(x);
        x = parent_path[x];
    }
    reverse(path.begin(), path.end());
    cout << path.size()-1 << endl;
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
    int test;
    cin >> test;
    while (test--)
    {
        int src, des;
        cin >> src >> des;
        memset(vis, false , sizeof(vis));
        memset(level, -1, sizeof(level));
        memset(parent_path, -1, sizeof(parent_path));

        bfs(src, des);
        destination(src, des);
    }
    

    return 0;
}