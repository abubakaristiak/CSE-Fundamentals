#include <bits/stdc++.h>
using namespace std;
const int N = 1e+5;
vector<int> v[N];
bool vis[N];
void dfs(int src)
{
    cout << src << endl;
    vis[src] = true;
    for (int child : v[src])
    {
        if (vis[child] == false)
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
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    memset(vis, false, sizeof(vis));

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (vis[i] == false)
        {
            dfs(i);
        }
        c++;
    }
    cout << "component -> " << c << endl;
    return 0;
}

/*
input:
6 5
0 1
1 2
0 2
3 4
3 5
*/