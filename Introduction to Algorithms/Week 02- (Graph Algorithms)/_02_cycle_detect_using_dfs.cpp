#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool vis[N];
bool ans;
int parentArray[N];

void dfs(int parent){
    vis[parent] = true;
    for(int child : adj[parent])
    {
        if(vis[child] == true && child != parentArray[parent]){
            ans = true;
        }
        if(vis[child] == false){
            parentArray[child] = parent;
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
        adj[a].push_back(b);
        adj[b].push_back(a);

    }   
    memset(vis, false, sizeof(vis));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    if(ans){
        cout << "Cycle dectected" << endl;
    }
    else cout << "Cycle not decteded" << endl;
    return 0;
}

/*
input:
7 6
6 5
5 4
4 3
6 3
2 1
1 0
*/