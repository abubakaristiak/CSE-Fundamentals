#include<bits/stdc++.h>
#define ll long long 
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin>> n;
    ll ar[n];
    for(int i=0; i<n; i++){
        cin>> ar[i];
    }
    ll tar; cin >> tar;
    ll ans=-1;
    for(int i=0; i<n; i++){
        if(ar[i]==tar){
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}