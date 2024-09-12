#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int> adj[N];
bool visited[N];
int parentArray[N];
bool ans;

void bfs(int src){
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int parent = q.front();
        q.pop();

        for(int child : adj[parent]){
            if(visited[child] == true && parentArray[parent] != child){
                ans = true;
            }
            if(visited[child] == false)
            {
                visited[child] = true;
                parentArray[child] = parent;
                q.push(child);
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
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }
    memset(visited, false, sizeof(visited));
    memset(parentArray, -1, sizeof(parentArray));
    ans = false;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            bfs(i);
        }
    }
    
    if(ans) cout << "Cycle detected" << endl;
    else cout << "Cycle not detected" << endl;
    return 0;
}