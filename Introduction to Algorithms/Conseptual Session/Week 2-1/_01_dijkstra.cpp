#include<bits/stdc++.h>
using namespace std;
const long long int INF = 1e18;
vector<pair<int,int>> adj[100005];
long long int dis[100005];
int nodes, edge;

void dijkstra(int src){
    for(int i=1; i<=nodes; i++){
        dis[i] = INF;
    }

    dis[src] = 0;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    pq.push({dis[src],src});

    while (!pq.empty())
    {
        pair<int,int> parent = pq.top();
        pq.pop();

        int parentNode = parent.second;
        int parentCost = parent.first;

        for(auto child : adj[parentNode]){
            int childNode = child.second;
            int childCost = child.first;

            if(dis[parentNode] + childCost < dis[childNode])
            {
                dis[childNode] = dis[parentNode] + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
    
}
int main()
{
    cin >> nodes >> edge;
    while (edge--)
    {
        int u,v,w;
        cin >> u >> v >> w;

        adj[u].push_back(make_pair(w,v));
        adj[v].push_back(make_pair(w,u));
    }
    
    int src = 1;
    dijkstra(src);
    
    for(int i=1; i<=nodes; i++){
        cout << i << "-> " << dis[i] << endl;
    }
    return 0;
}


// shortest path find:
/*
input:
5 6
1 4 1
1 2 2
2 5 5
2 3 4
3 4 3
3 5 4
*/