// //https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/L
// #include<bits/stdc++.h>
// using namespace std;
// void input_value(int n){
//     int a[n];
//     int b[n];
//     for(int i=0; i<n; i++){ // O(N)
//         cin >> a[i];
//     }
//     for(int i=0; i<n;i++){  // O(N)
//         cin >> b[i];
//     }

//     for(int i=0; i<n; i++){ // O(N)
//         cout << b[i] <<" ";
//     }
//     for(int i=0; i<n;i++){ // O(N)
//         cout << a[i]<<" ";
//     }

// }
// int main()
// {
//     int n;
//     cin >> n;
//     input_value(n);       // O(1)
//                         //--------------
//                         // O(N) -> total complexity
//     return 0;
// }


// solve with vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v1(n);
    vector<int> v2(n);
    vector<int> v3(n);
    for(int i=0; i<n; i++){
        cin>> v1[i];
    }
    for(int i=0; i<n;i++){
        cin >> v2[i];
    }
    v3 = v2;
    v3.insert(v3.end(), v1.begin(), v1.end());
    for(int val:v3){
        cout << val <<" ";
    }
    return 0;
}