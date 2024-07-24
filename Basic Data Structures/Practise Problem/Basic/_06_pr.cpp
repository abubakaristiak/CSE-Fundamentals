#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
    string s;
    cin >> s;
    for(char c:s){
        st.push(c);
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
    
    return 0;
}