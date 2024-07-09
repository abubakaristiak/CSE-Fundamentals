#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st1;
    stack<int> st2;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        st1.push(x);
    }
    while (!st1.empty())
    {
        st2.push(st1.top());
        st1.pop();
    }
    
    while (!st2.empty())
    {
        cout << st2.top()<< " ";
        st2.pop();
    }
    
    return 0;
}
