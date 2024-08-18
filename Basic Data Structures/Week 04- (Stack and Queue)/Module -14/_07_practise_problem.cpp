// doc link: https://docs.google.com/document/d/1a1Lsy-wgeNj8jZ1TcgUsTR6qgV5nZsTGnGRwob6lf08/edit
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1;
    cin >> n1;
    queue<int> q1;
    for(int i=0; i<n1; i++){
        int x; cin>>x;
        q1.push(x);
    }

    int n2; cin >> n2;
    queue <int> q2;
    for(int i=0; i<n2; i++){
        int x; cin >> x;
        q2.push(x);
    }
    
    queue<int> mergeQueue;
    while (!q1.empty())
    {
        mergeQueue.push(q1.front());
        q1.pop();
    }
    while (!q2.empty())
    {
        mergeQueue.push(q2.front());
        q2.pop();
    }
    
    while (!mergeQueue.empty())

    {
        cout << mergeQueue.front() << " ";
        mergeQueue.pop(); 
    }
    
    
    return 0;
}