#include<bits/stdc++.h>
using namespace std;
#define ll long long
int dp[1000005];
ll input;

bool recur(ll n){
    if(n > input) return false;
    if(n == input) return true;
    if(dp[n] != -1) return dp[n];
    return dp[n]=recur(n+3) || recur(n*2);
}


int main()
{
    int t;
    cin >> t;
    while (t--){
        cin >> input;
        memset(dp,-1, sizeof(dp));
        bool flag = recur(1);  
        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;
          
    }
    return 0;
}