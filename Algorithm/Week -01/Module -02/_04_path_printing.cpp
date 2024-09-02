#include<bits/stdc++.h>
using namespace std;
vector<int> v[1005];
bool vis[1005];
int level[1005];
int grandparent[1005];

void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for(int child : v[parent])
        {
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[parent]+1;
                grandparent[child] = parent;
            }
        }
    }
    
}
int main()
{
    int n, e;
    cin >> n >> e;

    while(e--){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int src, des;
    cin >> src >> des;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(grandparent, -1, sizeof(grandparent));
    bfs(src);
    int x = des;
    vector<int> path;
    while (x != -1)
    {
        path.push_back(x);
        x = grandparent[x];
    }
    reverse(path.begin(), path.end());
    for(int val: path)
    {
        cout << val << " ";
    }
    
    return 0;
}