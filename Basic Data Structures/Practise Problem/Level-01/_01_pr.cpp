#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);
    }
    vector<int>result;

    for(int i=1; i<v.size()-1; i++){
        if((v[i]<v[i-1]) && (v[i]<v[i+1])){
            result.push_back(v[i]);
        }
    }

    for(int i=0; i<result.size(); i++){
        cout << result[i]<<" ";
    }
    
    return 0;
}