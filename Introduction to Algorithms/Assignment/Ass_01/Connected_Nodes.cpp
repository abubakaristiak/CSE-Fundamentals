//TODO: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-05/challenges

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, e; cin >> n >> e;
    vector<int> matrix[n];

    while (e--)
    {
        int a,b; cin >> a >> b;
        matrix[a].push_back(b);
        matrix[b].push_back(a);

    }
    int test; cin >> test;
    while (test--)
    {
        int src; cin >> src;
        priority_queue<int> pq;
        for(int child : matrix[src]){
            pq.push(child);
        }
        
        if(pq.empty()){
            cout << -1 << endl;
        }
        
        else{
            while (!pq.empty())
            {
                cout << pq.top() << " ";
                pq.pop();
            }
            cout << endl;
            
        }
    }
    return 0;
}