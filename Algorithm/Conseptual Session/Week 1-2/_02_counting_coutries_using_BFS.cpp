#include<bits/stdc++.h>
using namespace std;
char graph[1001][1001];
bool vis[1001][1001];
int n,m;

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

bool isValid(int x, int y){
    if(x >=0 && x<n && y>=0 && y<m && graph[x][y] == '.'){
        return true;
    }
    else return  false;
}
void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int,int> node = q.front();
        q.pop();
        int nrow = node.first;
        int ncol = node.second;

        for(int i=0; i<4; i++){
            int ci = nrow + dx[i];
            int cj = ncol + dy[i];

            if(isValid(ci, cj) && vis[ci][cj] == false){
                vis[ci][cj] = true;
                q.push({ci, cj});

            }
        }
    }
    
}
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>> graph[i][j];
        }
    }
    
    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(graph[i][j] == '.' && vis[i][j] == false){
                bfs(i,j);
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}

/*
input:
5 5
..~..
..~..
~~~.~
...~~
...~~
*/