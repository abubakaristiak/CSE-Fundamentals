#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int w[n];
    for(int i=0; i<n; i++){
        cin>>w[i];
    }
    int s;
    cin>>s;
    int dp[n+1][s+1];
    dp[0][0] = 1;

    for(int i=1; i<=s; i++){
        dp[0][i] = 0;
    }


    for(int i=1; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(w[i-1] <= j){
                dp[i][j] = dp[i][j-w[i-1]] + dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout << dp[n][s]<<endl;  
    return 0;
}


/*
input:
3
1 2 3
5
*/



// visulization tool: https://recursion.vercel.app/

/*
template for Unbounded knapseck
def fn(n,s):
  if n==0:
    if s==0: return 1;
    else: return 0;
  
  if coins[n-1]<=s:
    return fn(n,s-coins[n-1])+fn(n-1,s)
  else:
    return fn(n-1,s)
*/