// https://www.spoj.com/problems/NAKANJ/

#include<bits/stdc++.h>
using namespace std;
bool vis[10][10];
int dis[10][10];
vector<pair<int, int>> d = {{2,1}, {2,-1}, {-2, 1}, {-2, -1},
                            {1,2}, {-1,2}, {1, -2}, {-1, -2}};
int n, m;
bool vaild(int i, int j){
    if(i<0 || i>=n || j<0 || j>=m){
        return false;
    }
    return true;
}

void bfs(int si, int sj){
    queue<pair<int,int>> q;
    q.push({si,sj});
    vis[si][sj] = true;
    dis[si][sj] = 0;
    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first; 
        int b = par.second;
        q.pop();
        for(int i=0; i<8; i++){
            int ci = a + d[i].first;
            int cj = b + d[i].second;
            if(vaild(ci, cj) == true && vis[ci][cj] == false){
                q.push({ci, cj});
                vis[ci][cj] = true;
                dis[ci][cj] = dis[a][b] + 1;
            }

        }
    }
    
}
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        n=8, m=8;
        string s,d;
        cin >> s >> d;
        int si, sj, di, dj;
        si = s[0] - 'a';
        sj = s[1] - '1';
        di = d[0] - 'a';
        dj = d[1] - '1';
        memset(vis, false, sizeof(vis));
        memset(dis, -1, sizeof(dis));
        bfs(si,sj);
        cout << dis[di][dj] << endl;
    }
    
    return 0;
}

/*
input: 
3 4
....
....
....
0 0
*/