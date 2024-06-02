//https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    for(int i=0; i<test; i++){
        int n;
        char c;
        cin>> n >> c;

        for(int i=0; i<n; i++){
            cout << c << " ";
        }
        cout << endl;
    }
    return 0;
}