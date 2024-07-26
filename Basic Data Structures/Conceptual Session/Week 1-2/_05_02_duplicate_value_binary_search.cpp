#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int x;
    cin >> x;
    bool is_duplicate = false;
    int l=0, r=n-1;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(x == ar[mid]){
            if(mid != 0 && ar[mid-1]==x || mid != n-1 && ar[mid+1]==x){
                is_duplicate=true;
                break;
            }
        }
        if(x>ar[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(is_duplicate==true){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}