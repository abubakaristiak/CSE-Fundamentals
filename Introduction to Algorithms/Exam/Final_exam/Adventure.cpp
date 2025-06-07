#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[1005][1005];

ll Knap(int n, int weight [], int value[], ll w)
{
    if(n==0 || w==0) return 0;
    if(dp[n][w] != -1) return dp[n][w];


    if(weight[n-1] <= w){
        ll op1 = Knap(n - 1, weight, value, w - weight[n-1]) + value[n-1];
        ll op2 = Knap(n - 1, weight, value, w);
        return dp[n][w] =  max(op1, op2);
    }
    else{
        ll op2 = Knap(n - 1, weight, value, w);
        return dp[n][w] = op2;
    }
}




int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n, w;
        cin >> n >> w;
        int weight[n+1], value[n+1];


        for (int i = 0; i < n; i++){
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++){
            cin >> value[i];
        }


        memset(dp, -1, sizeof(dp));
        cout << Knap(n, weight, value, w) << endl;
        
    }

    return 0;
}