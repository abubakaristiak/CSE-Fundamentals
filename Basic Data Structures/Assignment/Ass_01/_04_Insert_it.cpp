//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/insert-the-vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v1(n);
    for(int i=0; i<n; i++){
        cin >> v1[i];
    }
    int m;
    cin >> m;
    vector<int> v2(m);
    for(int i=0; i<m; i++){
        cin >> v2[i];
    }
    int x;
    cin >> x;
    v1.insert(v1.begin()+x,v2.begin(),v2.end());
    for(int i=0; i<v1.size(); i++){
        cout << v1[i]<<" ";
    }
    return 0;
}