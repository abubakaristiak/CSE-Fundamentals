// https://docs.google.com/document/d/1SInJU7vWMgmLO-lulcQ2aGAeLze-0632fS8Iz-14t_A/edit
// Solve this problem using function and Vector. 
#include<bits/stdc++.h>
using namespace std;
vector<int>running_sum(vector<int> &a){
    int n = a.size();
    vector<int> pre(n);
    pre[0] = a[0];
    for(int i=1; i<n;i++){
        pre[i] = a[i]+pre[i-1];
    }
    return pre;
    
}
int main()
{
    int n;
    cin >>n;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> result = running_sum(v);
    for(int i=0; i<n; i++){
        cout << result[i] <<" ";
    }
    cout << endl;
    
    return 0;
}


// // normally solve
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
//     vector<int> pre(n);
//     pre[0] = v[0];
//     for(int i=1; i<n; i++){
//         pre[i] = v[i]+pre[i-1];
//     }
//     for(int i=0; i<n; i++){
//         cout << pre[i] <<" ";
//     }
//     return 0;
// }

