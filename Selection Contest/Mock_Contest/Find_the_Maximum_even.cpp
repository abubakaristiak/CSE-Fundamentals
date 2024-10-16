// #include<bits/stdc++.h>
// #define ll long long
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     ll n;
//     cin>>n; 
//     ll ar[n];
//     for(int i=0; i<n; i++){
//         cin>> ar[i];
//     }
//     vector<int> v;
//     for(int i=0; i<n; i++){
//         if(ar[i]%2==0){
//             v.push_back(ar[i]);
//         }
//     }
//     sort(v.begin(),v.end());
//     int len = v.size();
//     ll sum = len + len-1;
//     cout<< sum << endl;
//     return 0;
// }


#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n;
    cin>>n; 
    vector<int> ar(n);
    priority_queue<int> even;
   
    for(int i=0; i<n; i++){
        cin>> ar[i];
        if(ar[i]%2==0){
            even.push(ar[i]);
        }
    }
    sort(ar.begin(), ar.end(),greater<int>());
    priority_queue<int> pq;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int sum = ar[i]+ar[j];
            if(sum%2==0) pq.push(sum);
        }
    }

    int mx_sum=0;
    int mx_even=0;
    if(!even.empty())
        mx_even = even.top();
    if(!pq.empty())
        mx_sum = pq.top();

    cout << max(mx_even, mx_sum) << endl;
    return 0;
}