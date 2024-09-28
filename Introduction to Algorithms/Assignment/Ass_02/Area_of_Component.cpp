#include<bits/stdc++.h>
using namespace std;
const int N=1e3+5;
bool vis[N][N];
char graph[N][N];
vector<pair<int, int>> d = {{0,1}, {0,-1}, {-1, 0}, {1, 0}};
int count_m = 0;
int n,m;


bool vaild(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}


void dfs(int si, int sj){
    vis[si][sj] = true;
    count_m++;

    for(int i=0; i<4; i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;

        if(vaild(ci, cj) && vis[ci][cj] == false){
            dfs(ci, cj);
        }
    }
}
int main()
{
    cin >> n >> m;
    memset(vis, false, sizeof(vis));

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> graph[i][j];
            if(graph[i][j] != '.'){
                vis[i][j] = true;
            }
        }
    }

    vector<int> store_mn_area;

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(!vis[i][j]){
                count_m = 0;
                dfs(i,j);
                store_mn_area.push_back(count_m);
                count_m = 0;
            }
        }
    }
    
    sort(store_mn_area.begin(), store_mn_area.end());
    
    if(!store_mn_area.empty()){
        cout << store_mn_area.front() << endl;
    }
    else cout << -1 << endl;

    
    return 0;
}
