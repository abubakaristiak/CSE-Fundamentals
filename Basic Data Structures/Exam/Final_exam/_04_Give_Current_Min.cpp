//https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-05/challenges
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int sz; cin >> sz;
    for(int i=0; i<sz; i++){
        int x; cin >> x;
        pq.push(x);
    }
    int test; cin >> test;
    while (test--)
    {
        int cmd; cin>> cmd;
        if(cmd == 0){
            int x; cin>> x;
            pq.push(x);
            if(!pq.empty()){
                cout << pq.top() << endl;
            }
            else cout << "Empty" << endl;
        }
        else if(cmd == 1){
            if(!pq.empty()){
                cout << pq.top() << endl;
            }
            else cout << "Empty" << endl;
        }
        else if(cmd == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout << pq.top() << endl;
                }
                else cout << "Empty" << endl;
            }
            else cout << "Empty" << endl;
        }   
    }
    
    return 0;
}