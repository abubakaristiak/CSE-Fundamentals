//TODO: https://codeforces.com/problemset/problem/22/A

#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        s.insert(x);
    }
    auto it = s.begin();
    it++;
    if(it != s.end()){
        cout << *it << endl;
    }
    else cout << "NO" <<endl;
    return 0;
}