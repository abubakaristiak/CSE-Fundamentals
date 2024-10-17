#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n; 
    vector<ll> a(n);
    for (int i=0; i<n; i++) {
        cin >> a[i]; 
    }

    ll t=0; 
    for (int i=0; i<n; i++) {
        t+=a[i];
    }

    ll prefix=0; 
    bool found=false;
    int index=-1; 
    ll value=0; 

    for (int i=0; i<n; i++) {
        prefix+=a[i];
        
        if (2*prefix-a[i] == t) {
            found=true;
            value=prefix; 
            index=i + 1; 
            break;
        }
    }

    if (found)cout <<value << " " <<index <<endl; 
    else cout << "UNSTABLE" << endl; 

    return 0;
}