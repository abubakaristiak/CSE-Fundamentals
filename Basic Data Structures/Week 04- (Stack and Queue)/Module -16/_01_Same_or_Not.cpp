//https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges
#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    queue<int> q;
    int n, m; cin >> n >> m;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        st.push(x);
    }

    for(int i=0; i<m; i++){
        int x; cin >> x;
        q.push(x);
    }
    bool flag = true;
    while (!st.empty() && !q.empty())
    {
        if(st.size() != q.size()){
            flag = false;
            break;
        }
        if(st.top() != q.front()){
            flag = false;
            break;
        }
        st.pop();
        q.pop();
        
    }
    if(flag==true) cout << "YES";
    else cout << "NO";
    
    return 0;
}