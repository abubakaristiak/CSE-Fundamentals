    #include<bits/stdc++.h>
using namespace std;
const int n = 100005;
int par[n];
int sz[n];

void dsu_init(int n){
    for(int i=0; i<n; i++){
        par[i] = -1;
        sz[i] = 1;
    }
}

int dsu_find(int node){
    if(par[node] == -1){
        return node;
    }
    int leader = dsu_find(par[node]);
    return leader; 
}

void Union_by_size(int nodeA, int nodeB){
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);

    if(sz[leaderA] > sz[leaderB]){
        par[leaderB] = leaderA;
        sz[leaderA] += sz[leaderB];
    }
    else{
        par[leaderA] = leaderB;
        sz[leaderB] += sz[leaderA]; 
    }
}




int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        Union_by_size(a,b);
    }
    
    return 0;
}

