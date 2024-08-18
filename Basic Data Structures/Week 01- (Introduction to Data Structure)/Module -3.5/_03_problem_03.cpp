#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // int v[n];
    for(int i=0; i<n; i++){     // O(N)
        cin >> v[i];
    }
    int q;
    cin >> q;
    sort(v.begin(),v.end());    // O(NlogN)
    // sort(v,v+n);
    while (q--)                 // O(Q)
    {
        int x; 
        cin >> x;
        int l = 0;
        int r = n-1;
        bool flag = false;
        while (l<=r)            // O(logN)
                                //----------
                                // O(Q) * O(logN) -> O(NlogN) -> total complexity
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