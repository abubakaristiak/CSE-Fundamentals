#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> ar(n);
    for(int i=0; i<n;i++){
        cin >> ar[i];
    }
    while (q--)
    {
        int l,r;
        cin>> l >> r;
        int sum=0;
        for(int i=l-1; i<r; i++){
            sum +=ar[i];
        }
        cout << sum<<endl;
    }
    
    return 0;
}