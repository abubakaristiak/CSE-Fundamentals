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


// without TLE
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int ar[n];
    for(int i=0; i<n; i++){     // O(N)
        cin >> ar[i];
    }
    int x;
    cin >> x;
    int l=0; 
    int r=n-1;
    bool flag = false;
    while (l<=r)        // O(logN)
    {
        int mid_index = (l+r)/2;
        if(ar[mid_index]==x){
            flag = true;
            break;
        }
        if(x>ar[mid_index])
        {
            //dane jate hobe
            l = mid_index+1;
        }
        else{
            // bame jate hobe
            r=mid_index-1;
        }
    }
    if(flag==true) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
    
    return 0;
}