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
        int flag=0;
        for(int i=0; i<n; i++){
            if(ar[i]==x){
                flag=1;
            }
        }
        if(flag==1){
            cout <<"found" <<endl;
        }
        else{
            cout <<"not found"<<endl;
        }
    }
    
}