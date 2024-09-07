#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10005];
int level[10005];
priority_queue<int> pq;

void bfs(int src, int input_level){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;

    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        if(level[par] == input_level){
            pq.push(par);
        }
        for(int child : v[par]){
            if(!vis[child]){
                q.push(child);
                vis[child] = true;
                level[child] = level[par]+1;
            }
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
    int input_level; 
    cin >> input_level;
    memset(vis, false, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(0, input_level);

    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    
    
    return 0;
}   