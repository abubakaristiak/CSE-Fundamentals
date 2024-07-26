#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x; 
        q.push(x);
    }
    int k; cin >> k;
    queue<int> newQ;
    for(int i=1; i<=n; i++){
        if(i != k){
            newQ.push(q.front());
        }
        q.pop();
    }
    while (!newQ.empty())
    {
        cout << newQ.front() << " ";
        newQ.pop();
    }
    
    return 0;
}