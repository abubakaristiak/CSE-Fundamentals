// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll n; cin >> n;
//     ll ar[n];
//     set<ll> st;
//     for(int i=0; i<n; i++){
//         cin >> ar[i];
//         st.insert(ar[i]);

//     }

//     int sum=0;
//     for (auto it=st.begin(); it!=st.end(); ++it) {
//         sum+=*it;
//     }
//     cout << sum << endl;
//     return 0;
// }



#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vector<ll> ar(n);
    for (int i = 0; i < n; i++) {
        cin>>ar[i];
    }
    sort(ar.begin(), ar.end(), greater<ll>());
    ll s=0;
    ll l=INT_MAX;

    for (int i = 0; i < n; i++) {
        if (ar[i]>=l) {
            ar[i]=l-1;  
        }
        if (ar[i]<=0) {
            break;
        }

        s+=ar[i];
        l=ar[i];
    }
    cout << s << endl;
    return 0;
}
