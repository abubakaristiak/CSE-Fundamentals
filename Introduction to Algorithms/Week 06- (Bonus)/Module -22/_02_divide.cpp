#include<bits/stdc++.h>
using namespace std;
void divide(int ar[], int l, int r){
    for(int i=l; i<=r; i++){
        cout<< ar[i] << " ";
    }
    cout << endl;
    if(l<r){
        int mid=(l+r)/2;
        divide(ar,l,mid);
        divide(ar,mid+1,r);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin>> ar[i];
    }

    divide(ar,0,n-1);
    return 0;
}



/*
input:
6
10 20 30 40 50 60
*/