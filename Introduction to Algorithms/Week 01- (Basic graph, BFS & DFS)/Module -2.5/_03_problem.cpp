#include<bits/stdc++.h>
using namespace std;
vector<int> v[10005];
int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a,b; 
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);

    }
    int src;
    cin >> src;
    cout << v[src].size() << endl;
    
    return 0;
}