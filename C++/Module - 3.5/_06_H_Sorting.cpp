//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    sort(ar,ar+n);
    for(int i=0; i<n; i++){
        cout << ar[i] <<" ";
    }

    return 0;
}