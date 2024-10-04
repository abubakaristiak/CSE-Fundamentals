#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int ar[n];
    int s=0;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        s+=ar[i];
    }


    int diff; cin >> diff;
    bool dp[n+1][s+1];
    dp[0][0] = true;
    for(int i=1; i<=n; i++){
        dp[0][i] = false;
    }



    for(int i=1; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(ar[i-1] <= j){
                dp[i][j] = dp[i-1][j-ar[i-1]] || dp[i-1][j];
            }
            else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }



    vector<int> v;  
    for(int i=0; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(dp[i][j]){
                v.push_back(j);
            }
        }
    }


    int cnt = 0;
    for(int val: v){
        int s1 = val;
        if(s1==(diff+s)/2){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}