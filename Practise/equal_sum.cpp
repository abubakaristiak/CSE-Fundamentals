#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    int s=0;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        s+=ar[i];
    }

    if(s%2==0){
        int sum = s/2;
        bool dp[n+1][sum+1];
        dp[0][0] = true;
        for(int i=1; i<=sum; i++){
            dp[0][1] = false;
        }

        for(int i=1; i<=n; i++){
            for(int j=0; j<=sum; j++){
                if(ar[i-1] <= j){
                    dp[i][j] = dp[i-1][j-ar[i-1]] || dp[i-1][j];
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        if(dp[n][sum]) cout << "Yes" << endl;
        else cout << "No"<< endl;
        
    }
    else{
        cout << "NO" <<endl;
    }
    
    return 0;
}