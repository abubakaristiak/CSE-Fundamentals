// https://cses.fi/problemset/task/1676

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int par[N];
int sz[N];
int cmp, mx;

void dsu_init(int n){
    for(int i=0; i<n; i++){
        par[i] = -1;
        sz[i] = 1;
    }
    mx = INT_MIN;
    cmp = n;
}

int dsu_find(int node){
    if(par[node] == -1){
        return node;
    }
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}

void dsu_union_by_size(int nodeA, int nodeB){
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);

    if(leaderA == leaderB) {
        return;
    }

    if(sz[leaderA] > sz[leaderB]){
        par[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
        mx = max(mx, sz[leaderA]);
    }
    else{
        par[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA];
        mx = max(mx, sz[leaderB]);
    }
    cmp--;
}

int main()
{
    int n, m;
    cin >> n >> m;
    dsu_init(n);

    while (m--)
    {
        int a,b;
        cin >> a >> b;
        dsu_union_by_size(a,b);
        cout << cmp << " " << mx << endl;

    }
    
    return 0;
}

/*
input:
5 3
1 2
1 3
4 5
*/