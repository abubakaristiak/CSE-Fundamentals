#include<bits/stdc++.h>
using namespace std;
const long long int INF = 1e18;
int main()
{
    int n,e; 
    cin >> n >> e;
    long long int adj[n+5][n+5];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            adj[i][j] = INF;
            if(i==j){
                adj[i][j] = 0;
            }
        }
    }
    while (e--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        adj[a][b] = min(adj[a][b],c);
    
    }

    for(int k=1; k<=n; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                if(adj[i][k] + adj[k][j] < adj[i][j]){
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
    int test; cin >> test;
    while (test--)
    {
        int source, destination;
        cin >> source >> destination;
        if(adj[source][destination] == INF){
            cout << -1 <<endl;
        }
        else cout << adj[source][destination] << endl;
    }
    
    
    return 0;
}