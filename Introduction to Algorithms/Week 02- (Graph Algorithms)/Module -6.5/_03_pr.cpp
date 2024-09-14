//https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

/*
class Solution
{
    public:
    vector<int> dis;
    class cmp
    {
    public:
        bool operator()(pair<int, int> a, pair<int, int> b)
        {
            return a.second > b.second;
        }
    };
    void dijkstra(int src,  vector<vector<int>> adj[])
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        pq.push({src, 0});
        dis[src] = 0;
        while (!pq.empty())
        {
            pair<int, int> parent = pq.top();
            pq.pop();
            int node = parent.first;
            int cost = parent.second;
            for (auto child : adj[node])
            {
                int childNode = child[0];
                int childCost = child[1];
                if (cost + childCost < dis[childNode])
                {
                    dis[childNode] = cost + childCost;
                    pq.push({childNode, dis[childNode]});
                }
            }
        }
    }
    
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        for (int i = 0; i < V; i++)
        {
            dis.push_back(INT_MAX);
        }
        dijkstra(S,adj);
        return dis;
    }
};
*/