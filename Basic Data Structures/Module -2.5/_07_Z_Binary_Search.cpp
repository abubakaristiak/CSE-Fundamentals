//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
// time limit exit asbe 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> ar(n);
    for(int i=0; i<n;i++){
        cin >> ar[i];
    }
    while (q--)
    {
        int x;
        cin>>x;
        int flag=0;     // bool flag=false;
        for(int i=0; i<n; i++){
            if(ar[i]==x){
                flag=1;  // flag=true
                break;
            }
        }
        if(flag==1){    // flag==true
            cout <<"found" <<endl;
        }
        else{
            cout <<"not found"<<endl;
        }
    }
    
}