#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];

int subset_sum(int n, int ar[], int s){
    if(n==0){
        if(s==0) return 1;
        else return 0;
    }
    if(dp[n][s] != -1) return dp[n][s];
    if(ar[n-1] <= s){
        int op1 = subset_sum(n-1, ar, s-ar[n-1]);
        int op2 = subset_sum(n-1, ar, s);
        return dp[n][s] = op1 + op2;
    }
    else{
        return dp[n][s] = subset_sum(n-1, ar, s);
    }


}
int main()
{
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }


    int s; cin >> s;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=s; j++){
            dp[i][j] = -1;
        }
    }
    cout << subset_sum(n,ar,s);
    return 0;
}


/*
input:
4
1 2 4 6
7
*/