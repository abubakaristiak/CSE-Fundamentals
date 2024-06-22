#include<bits/stdc++.h>
using namespace std;
int main()
{
    // type -> 1;
    vector<int> v;
    cout << v.size()<<endl;


    // type -> 2;
    vector<int> v(5);
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
    cout << v.size()<<endl;

    
     // type -> 3;
    vector<int> v(5,10);
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
    cout << v.size()<<endl;


     // type -> 4;
    vector<int>v2(5,100);
    vector<int> v(v2);
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
    cout << v.size()<<endl;


    // type -> 5;
    int ar[6] = {10,20,30,40,50,60};
    vector<int> v(ar, ar+6);
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;
    cout << v.size()<<endl;

    return 0;
}


// // vector input and output
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> v;
//     for(int i=1; i<=n; i++){
//         v.push_back(i);
//     }
//     for(int i=0;i<n;i++){
//         cout<<v[i]<<" ";
//     }
//     return 0;
// }