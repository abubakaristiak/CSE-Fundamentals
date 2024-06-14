#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int q;
    cin >> q;
    sort(v.begin(),v.end());
    // sort(v,v+n);
    while (q--)
    {
        int x; 
        cin >> x;
        int l = 0;
        int r = n-1;
        bool flag = false;
        while (l<=r)
        {
            int mid = (l+r)/2;
            if(x ==v[mid]){
                flag=true;
                break;
            }
            if(x > v[mid]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(flag==true){
            cout << "YES"<<endl;
        }
        else{
            cout <<"NO"<<endl;
        }
        
        
    }
    
    return 0;
}