// https://codeforces.com/problemset/problem/25/D

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int group_size[N];

void dsu_init(int n){
    for(int i=1; i<=n; i++){
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node){
    if(parent[node] == -1){
        return node;
    }
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int nodeA, int nodeB){
    int leaderA = dsu_find(nodeA);
    int leaderB = dsu_find(nodeB);
    if(group_size[leaderA] > group_size[leaderB]){
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int main()
{
    int n;
    cin >> n;
    dsu_init(n);
    vector<pair<int,int>> bad;
    vector<pair<int,int>> create;

    for(int i=1; i<=n-1; i++){
        int a,b;
        cin >> a >> b;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if(leaderA == leaderB){
            bad.push_back({a,b});
        }
        else{
            dsu_union_by_size(a,b);
        }
    }
    cout <<  bad.size() << endl;
    for(int i=2; i<=n; i++){
        int leaderA = dsu_find(1);
        int leaderB = dsu_find(i);

        if(leaderA != leaderB){
            create.push_back({1,i});
            dsu_union_by_size(1,i);
        }
    }

    for(int i=0; i<bad.size(); i++){
        cout << bad[i].first << " " << bad[i].second << " " << create[i].first << " " <<create[i].second << endl;
    }
    return 0;
}