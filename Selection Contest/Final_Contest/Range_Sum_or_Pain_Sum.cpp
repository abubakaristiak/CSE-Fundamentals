#include <iostream>
#define ll long long
using namespace std;
ll isSum(int n) {
    if (n<=0) return 0;  
    ll div=n/2;  
    ll isSum=(div*(div + 1));
    if (n%2 == 1) {
        isSum+=div+1; 
    }
    return isSum;
}
ll tSum(int left, int right) {
    return isSum(right) - isSum(left-1);  
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;
    cin>>n>>q;
    while (q--) {
        int l,r;
        cin >>l >>r;
        cout << tSum(l, r) << endl;
    }

   return 0;
}










// #include<bits/stdc++.h>
// #define ll ll
// using namespace std;
// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n,q; cin>>n>>q;
//     vector<ll>v;
//     for (int i=1; i<=n/2; i++) {
//         v.push_back(i);
//         v.push_back(i);
//     }
    
//     vector<ll> px(n+1, 0);
//     for (int i=1; i<=n; i++) {
//         px[i]=px[i-1]+v[i-1];
//     }
    
//     for (int i=0; i<q; i++) {
//         ll val1,val2;
//         cin >>val1>>val2;
//         cout << px[val2]-px[val1-1]<<endl;
//     }
//     return 0;
// }










// #include<bits/stdc++.h>
// #define ll ll
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll n,q; cin>>n>>q;
//     for(ll i=0; i<q; i++){
//         ll val1,val2;
//         cin>>val1>>val2;
//         ll s=0;
//         for(ll j=val1; j<=val2; j++){
//             s+=(j+1)/2;
//         }
//         cout<<s<<endl;
//     }
//     return 0;
// }




// #include <bits/stdc++.h>
// #define ll ll
// using namespace std;

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

//     ll n, q;
//     cin >> n >> q;

//     // Constructing the sequence and computing the prefix sum
//     vector<ll> prefix(n + 1, 0); // Prefix sum array
//     for (int i = 1; i <= n; ++i) {
//         prefix[i] = prefix[i - 1] + (i + 1) / 2; // Adding the (i+1)/2 value to prefix
//     }

//     // Processing the queries
//     while (q--) {
//         ll l, r;
//         cin >> l >> r;
//         // Calculate sum from prefix sum array
//         cout << prefix[r] - prefix[l - 1] << '\n';
//     }

//     return 0;
// }






