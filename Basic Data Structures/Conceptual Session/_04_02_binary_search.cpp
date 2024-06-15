#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    int x;
    cin >> x;
    sort(v.begin(), v.end());

    int l,r;
    l=0,r=n-1;
    bool flag = false;
    while (l<=r)
    {
        int mid=(l+r)/2;
        if(v[mid]==x){
            flag = true;
            break;
        }

        else if(x > v[mid]){
            l = mid+1;
        }
        else{
            r=mid-1;
        }
    }

    if(flag){
        cout << "found"<<endl;
    }
    else{
        cout << "not found"<< endl;
    }
    
    return 0;
}