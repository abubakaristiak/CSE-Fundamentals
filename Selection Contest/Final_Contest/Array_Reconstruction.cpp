#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t; cin >> t;
    while (t--) {
        ll n;
        cin >> n; 
        vector<ll>v(n-2);
        ll s=0;
        for (ll i=0; i<n-2; i++){
            cin>>v[i];
            s+=v[i];
        }
        ll gen_sum;
        cin>>gen_sum; 
        ll t_sum=gen_sum-s;
        
        if (t_sum>=0) cout << t_sum+1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
