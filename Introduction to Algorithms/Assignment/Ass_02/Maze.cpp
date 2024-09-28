
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
bool vis[N][N];
int n, m;
int si, sj, di, dj;
char graph[N][N];
pair<int,int> parent[N][N];

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};



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
        int a = node.first;
        int b = node.second;

        for(int i=0; i<4; i++){
            int ci = a + dx[i];
            int cj = b + dy[i];

            if(vaild(ci, cj) && vis[ci][cj] == false && graph[ci][cj]){
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = {a,b};
                
            }

        }
    }
    
}
int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));

    for(int i=0; i<n ; i++){
        for(int j=0; j<m; j++){
            cin >> graph[i][j];
            
            if(graph[i][j] == '#'){
                vis[i][j] = true;
            }
            if(graph[i][j] == 'R'){
                si = i, sj = j;
            }
            if(graph[i][j] == 'D'){
                di = i, dj = j;
            }
        }
    }

    bfs(si,sj);

    if(vis[di][dj]){
        pair<int, int> start = {-1, -1};
        pair<int, int> end = {di, dj};

        while (end != start)
        {
            graph[end.first][end.second] = 'X';
            end = parent[end.first][end.second];
        }
        
        graph[si][sj] = 'R';
        graph[di][dj] = 'D';

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cout << graph[i][j];
            }
            cout << endl;
        }
    }
    else{
        for(int i=0; i<n ; i++){
            for(int j=0; j<m; j++){
                cout << graph[i][j];
            }
            cout << endl;
        }
    }
    
    return 0;
}
