//TODO: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-05/challenges

#include<bits/stdc++.h>
using namespace std;
int n,m;
char matrix[10005][10005];
bool vis[10005][10005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid (int i, int j){
    if(i<0 or j<0 or i>=n or j>=m or matrix[i][j] =='#')
        return false;
    return true;
}

void dfs(int si, int sj)
{
    vis[si][sj] = true;

    for (int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second; 

        if (valid(ci, cj) && vis[ci][cj] == false){
            vis[ci][cj] = true;
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> matrix[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    int cnt = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == '.' && vis[i][j] == false){
                dfs(i,j);
                cnt++;
            }

        }
    }   
    cout << cnt << endl;

    return 0;
}