#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int par[N];
int group_size[N];


void dsu_initalize(int n){
    for(int i=0; i<n; i++){
        par[i] = -1;
        group_size[i] = 1;
    }
}



int dsu_find(int node){
    if(par[node] == -1) return node;
    int leader = dsu_find(par[node]);
    par[node] = leader;
    return leader;
}



void dsu_union(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    par[leaderA] = leaderB;
}



void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]){
        par[leaderB] = leaderA;
        group_size[leaderA]+= group_size[leaderB];
    }
    else{
        par[leaderA] = leaderB;
        group_size[leaderB]+= group_size[leaderA];
    }
}



int main()
{
    dsu_initalize(7);
    dsu_union_by_size(1,2);
    dsu_union_by_size(2,3);
    dsu_union_by_size(4,5);
    dsu_union_by_size(5,6);

    dsu_union_by_size(1,4); // both group are friends

    cout<< dsu_find(1) << endl;
    cout << dsu_find(4) << endl;    


    return 0;
}