#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> s;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        q.push(x);
    }

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty()){
        cout << s.top() <<" ";
        s.pop();
    }
    return 0;
}