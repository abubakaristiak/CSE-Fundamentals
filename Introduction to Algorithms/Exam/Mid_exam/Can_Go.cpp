    #include<bits/stdc++.h>
    using namespace std;
    vector<pair<int,long long int>> adj[100010];
    long long int dis[100010];


    class cmp{
        public:
            bool operator()(pair<int,long long int> a, pair<int, long long int> b){
                return a.second > b.second;
            }
    };
    void dijkstra(int src){
        
        priority_queue<pair<int,long long int>, vector<pair<int,long long int>>, cmp> pq;
        pq.push({src, 0}); 
        dis[src] = 0;
        while (!pq.empty())
        {
            pair<int,long long int> parent = pq.top();
            pq.pop();
            int node = parent.first;
            long long int cost = parent.second;
            
            for(auto child : adj[node]){
                int childNode = child.first;
                int childCost = child.second;
                if(cost + childCost < dis[childNode])
                {
                    // Path relax;
                    dis[childNode] = cost + childCost;
                    pq.push({childNode, dis[childNode]});

                }
            }
        }
        
    }
    int main()
    {
        int n, e;
        cin >> n >> e;
        while (e--)
        {
            int a, b, w;
            cin>> a >> b >> w;
            adj[a].push_back(make_pair(b,w));
        }
        int src; cin >> src;
        int test; cin >> test;

        for(int i=1; i<=n; i++){
            dis[i] = 10e17;
        }
        dijkstra(src);

        while (test--)
        {

            long long int des, cost;
            cin >> des >> cost;
            if(dis[des] <= cost){
                cout << "YES" << endl;
            }
            else cout << "NO" << endl;
        }
        
        
        return 0;
    }