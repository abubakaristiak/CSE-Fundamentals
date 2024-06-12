//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    int ar[n];   // vecotor<int> ar(n); 
    for(int i=0; i<n;i++){      // O(N)
        cin >> ar[i];
    }
    sort(ar,ar+n);              // O(NlogN)
    while (q--)                 // O(Q)-> O(N)
    {
        int x;
        cin>>x;
        bool flag=false;
        int l=0, r=n-1;

        // binary search;       //----------------
        while (l<=r)            // O(logN)
                                // O(N)*O(logN) -> O(NlogN)
        {
            int mid = (l+r)/2;
            if(ar[mid]==x){
                flag=true;
                break;
            }
            if(x>ar[mid])
            {
                l=mid+1;
            }
            else{
                r= mid-1;
            }

        }                       // O(NlogN)+O(NlogN)+O(N)
                                //Total complexity -> O(NlogN);
        
        if(flag==true){
            cout <<"found" <<endl;
        }
        else{
            cout <<"not found"<<endl;
        }
    }
    
}