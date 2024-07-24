#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        st.push(x);
    }

    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    
    
    int k; cin >> k;

    for(int i=1; i<k; i++){
        st.pop();
    }
    cout << st.top();
    
    return 0;
}