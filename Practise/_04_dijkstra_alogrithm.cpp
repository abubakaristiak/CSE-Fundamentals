#include<bits/stdc++.h>
using namespace std;
const int N = 100;
int dis[N];
vector<pair<int,int>> v[N];

void dijkstra(int src){
    priority_queue<pair<int,int>, vector<pair<int,int>, cmp>{
          
    } 
}

int main()
{
    int n,e;
    cin >> n >> e;
    while (e--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
        v[b].push_back({a,c});
    }
    for(int i=0; i<n; i++){
        dis[i] = INT_MAX;
    }

    dijkstra(0);
    return 0;
}