#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
bool vis[10005];
int counting[10005];

void dfs(int src, int another_src){
    counting[another_src]++;
    vis[src] = true;
    for(int child : v[src]){
        if(vis[child] == false){
            dfs(child, another_src);
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
    memset(counting, 0, sizeof(counting));

    int c=0;
    for(int i=0; i<n; i++){
        if(vis[i] == false){
            dfs(i,i);
        }
        c++;
    }

    set<int> nodes;
    for(int c:counting){
        if(c != 0){
            nodes.insert(c);
        }
    }

    for(int c : nodes){
        cout<< c << " ";
    }
    return 0;
}