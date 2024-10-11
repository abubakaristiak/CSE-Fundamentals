#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
int unbound_knapseck(int n, int s, int val[], int w[]){

    if(n==0 || s==0) return 0;
    if(dp[n][s] != -1) return dp[n][s];
    if(w[n-1] <= s){
        int ch1=unbound_knapseck(n,s-w[n-1],val, w)+val[n-1];
        int ch2=unbound_knapseck(n-1,s,val,w);
        return dp[n][s] = max(ch1,ch2);
    }
    else{
        return dp[n][s] = unbound_knapseck(n-1,s,val,w);
    }
}
int main()
{
    int n,s;
    cin>>n>>s;
    int val[n],w[n];
    memset(dp,-1,sizeof(dp));

    for(int i=0; i<n; i++){
        cin>> val[i];
    }
    for(int i=0; i<n; i++){
        cin>> w[i];
    }
    cout << unbound_knapseck(n,s,val,w) << endl;
    return 0;
}


/*
input:
4 6
5 3 2 4
4 1 3 2
*/