//https://www.hackerrank.com/contests/assignment-03-a-basic-data-structure-a-batch-05/challenges
#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    queue<string> q;
    while (t--)
    {
        int cmd; cin>>cmd;
        if(cmd==0){
            string nam; cin >> nam;
            q.push(nam);
        }
        else if(cmd==1){
            if(!q.empty()){
                cout << q.front()<<endl;
                q.pop();
            }
            else{
                cout << "Invalid"<<endl;
            }
        }
    }
    
    return 0;
}