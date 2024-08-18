//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Y
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, q;
    cin >> n >> q;
    vector<int> ar(n);
    for(int i=0; i<n;i++){      // O(N)
        cin >> ar[i];
    }
    long long int pre[n];
    pre[0]=ar[0];
    for(int i=1; i<n; i++){     // O(N)
        pre[i] = ar[i] + pre[i-1];
    }
    while(q--)                  // O(Q)
                                //-----------
                                // O(N+Q) -> total complexity
    {
        long long int l,r;
        cin>> l >> r;
        l--;
        r--;
        long long int sum;
        if(l==0) sum=pre[r];
        else sum = pre[r]-pre[l-1];
        cout << sum << endl;
   
    }
    
    return 0;
}