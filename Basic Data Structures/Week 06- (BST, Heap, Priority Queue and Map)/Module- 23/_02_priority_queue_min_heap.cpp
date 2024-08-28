#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>, greater<int>> pq;
    while (true)
    {
        int cmd; cin >> cmd;
        if(cmd == 0){   //insert
            int x; cin >> x;
            pq.push(x);     // O(logN)
        }

        else if(cmd == 1){  // delete 
            pq.pop();   // O(logN)
        }

        else if(cmd == 2){  // show value
            cout << pq.top() << endl;   // O(1)
        }
        
        else if(cmd == 3) break;    // terminate
    }
    
    return 0;
}