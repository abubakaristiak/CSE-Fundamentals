// //https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for(int i=0; i<n; i++){
//         cin >> v[i];
//     }
//     for(int i=v.size()-1; i>=0; i--){
//         cout << v[i] <<" ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n]; 
    for(int i=0; i<n; i++){
        cin >> ar[i];

    }

    for(int i=0; i<n; i++){
        if(ar[i]>0){
            ar[i]==1;
            cout << ar[i]<<" ";
        }
        else if(ar[i]<0){
            ar[i]==2;
            cout << ar[i]<<" ";
        }
        else{
            cout << ar[i]<< " ";
        }
    }
    return 0;
}