#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int> pq;
    while (true)
    {
        int cmd; cin >> cmd;
        if(cmd == 0){   //insert
            int x; cin >> x;
            pq.push(x);
        }

        else if(cmd == 1){
            pq.pop();   // delete
        }

        else if(cmd == 2){
            cout << pq.top() << endl;   // show value
        }
        
        else if(cmd == 3) break;    // terminate
    }
    
    return 0;
}