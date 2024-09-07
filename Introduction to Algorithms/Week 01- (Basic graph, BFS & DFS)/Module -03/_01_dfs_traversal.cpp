#include<bits/stdc++.h>
using namespace std;
const int N = 1e+5;
vector<int> v[N];
bool vis[N];
void dfs(int src){
    cout << src << endl;
    vis[src] = true;

    // for(int i=0; i<v[src].size(); i++){
    //     int child = v[src][i];
    //     if(vis[child] == false){
    //         dfs(child);
    //     }
    // }
    for(int child: v[src]){
        if(!vis[child])
        {
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
        int a,b; 
        cin >>  a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));
    dfs(0);
    return 0;
}


/*
input: 
6 6
0 1
0 2
0 3
1 4
3 5
3 2
*/