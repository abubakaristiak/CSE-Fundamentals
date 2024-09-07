//TODO: https://www.hackerrank.com/contests/assignment-01-a-introduction-to-algorithms-a-batch-05/challenges
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n,e; cin >> n >> e;
    // int matrix[n+10][n+10];
    int matrix[n][n];
    memset(matrix, 0, sizeof(matrix));

    while (e--)
    {
        int a,b; cin >> a >> b;
        matrix[a][b] = 1;
        // matrix[a][a] = 1;
        // matrix[b][b] = 1;

    }

    int test; cin >> test;
    while (test--)
    {
        int a,b; cin >> a>> b;
        if(a<0 || a>=n || b<0 || b>=n){
        // if(a>n or b>n){
            cout<< "NO" << endl;
            continue;
        }
        if(matrix[a][b] == 1){
            cout << "YES" << endl;
        }
        else if(a==b){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;

    }
    

    
    return 0;
}