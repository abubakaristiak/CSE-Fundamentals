#include<bits/stdc++.h>
using namespace std;
bool vis[20][20];
int dx[4] = {-1, 1, 0, 1};
int dy[4] = {0, 0, 1, -1};
int n, m;
char graph[20][20];
map<pair<int,int>, pair<int, int>> par;

bool vaild(int ci, int cj){
    if(ci>=0 && ci<n && cj>=0 && cj<m){
        return true;
    }
    return false;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> node = q.front();
        q.pop();

        for(int i=0; i<4; i++){
            int ci = node.first + dx[i];
            int cj = node.second + dy[i];

            if(vaild(ci, cj) == true && vis[ci][cj] == false){
                q.push({ci, cj});
                vis[ci][cj] = true;
                par[{ci, cj}] = {node.first, node.second};
                
            }

        }
    }
    
}
int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));

    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            cin >> graph[i][j];
        }
    }

    bfs(0,0);

    // if(vis[2][2]){
    //     int xi = 2; 
    //     int xj = 2;
    //     while (true)
    //     {
    //         int newXi = par[{xi, xj}].first;
    //         int newXj = par[{xi, xj}].second;
    //         xi = newXi;
    //         xj = newXj;

    //         if(graph[xi][xj] == 'A'){
    //             break;
    //         }
    //         graph[xi][xj] = 'X';

            
    //     }
        
    // }

    int sti = par[{2,2}].first;
    int stj = par[{2,2}].second;
    while (graph[sti][stj] != 'A')
    {
        graph[sti][stj] = 'X';

        sti = par[{sti, stj}].first;
        stj = par[{sti, stj}].second;
    }
    


    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            cout << graph[i][j];
        }
        cout << endl;
    }
    return 0;
}

/*
input: 
3 3
A..
...
..B
*/


/*
if facing any problem to clarify:
link:
https://github.com/phitronio/Conceptual-Sessions-Code/blob/main/Batch%205/Algorithm/Week%2004%20Special%20Recap%20Session/bfs_path_printing.cpp
*/
