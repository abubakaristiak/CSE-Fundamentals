//https://docs.google.com/document/d/1dQgKdPZjz3DBWvBM5cGOK0_Capw2va0U7G7NDktEsw4/edit#heading=h.kglpjbauiex6
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        v[i] = i+1;
    }

    for(int i=0; i<n; i++){
        cout << v[i]<<" ";
    }
    
    return 0;
}