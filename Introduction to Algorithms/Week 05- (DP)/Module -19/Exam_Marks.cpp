#include<bits/stdc++.h>
using namespace std;
int dp[1005][1005];
bool checkMark(int n, int tar, int arr[]){
    if(n==0){
        if(tar==0) return true;
        else return false;
    }
    
    
    if(dp[n][tar] != -1){
        return dp[n][tar];
    }
    
    
    if(arr[n-1] <= tar){
        bool pick = checkMark(n-1, tar-arr[n-1], arr);
        bool no_pick = checkMark(n-1, tar, arr);
        return dp[n][tar] = pick || no_pick;
    }
    else{
        bool no_pick = checkMark(n-1, tar, arr);
        return dp[n][tar] = no_pick;
    }
}

int main(){

    int t; cin >> t;
    while (t--)
    {
        int n, mark;
        cin>>n>>mark;
        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int tar = 1000-mark;
        if(mark==0) cout << "YES"<< endl;
        else{
            memset(dp,-1,sizeof(dp));
            if(checkMark(n,tar,arr)) cout << "YES"<<endl;
            else cout << "NO" << endl;

        }
        
    }
    return 0;
    
}


