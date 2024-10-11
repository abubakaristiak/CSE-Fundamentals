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
    int n;
    cin>>n;
    int val[n],w[n];
    for(int i=0; i<=n; i++){
        for(int j=0; j<=n; j++){
            dp[i][j]=-1;
        }
    }
    for(int i=0; i<n; i++){
        cin>>val[i];
        w[i]=i+1;
    }
    cout << unbound_knapseck(n,n,val,w);
    return 0;
}


/*
input:
8
2 4 4 5 8 10 12 9
*/