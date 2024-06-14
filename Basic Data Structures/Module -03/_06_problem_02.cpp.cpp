// prefix sum
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n,q;
//     cin >> n >> q;
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin>>v[i];
//     }

//     long long int pre[n];
//     pre[0] = v[0];
//     for(int i=1; i<n;i++){
//         pre[i] = v[i] + pre[i-1];
//     }
    
//     while (q--)
//     {
//         long long l,r;
//         cin >> l >>r;
//         l--;
//         r--;
//         long long int sum;
//         if(l==0){
//             sum = pre[r];
//         }
//         else{
//             sum = pre[r]-pre[l-1];
//         }
//         cout << sum << endl;
//     }
    
    
//     return 0;

// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> leftsum(n);
    for(int i=1; i<n;i++){
        leftsum[i] =v[i-1]+ leftsum[i-1];
    }
    for(int i=0; i<n; i++){
        cout << leftsum[i] << " ";
    }
    return 0;
}