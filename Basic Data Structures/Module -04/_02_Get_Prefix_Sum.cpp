//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/get-prefix-sum
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long int> v(n);
    for(int i=0; i<n; i++){
        cin>> v[i];
    }

    long long int pre[n];
    pre[0] = v[0];
    for(int i=1; i<n; i++){
        pre[i] = v[i]+pre[i-1];
    }

    for(int i=n-1; i>=0; i--){
        cout << pre[i] << " ";
    }
    return 0;
}