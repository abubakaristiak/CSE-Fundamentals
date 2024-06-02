//https://docs.google.com/document/d/1vcBz2ZOMY5Bcmh5b0zpRaGdwp3dU9C2Q/edit
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int *ar = new int[n];
    for(int i=0; i<n; i++){
        cin>> ar[i];
    }
    int m; 
    cin>> m;
    int *br = new int[m];
    for(int i = 0; i<n; i++){
        br[i] = ar[i];
    }
    delete[] ar;
    for(int i=n; i<m; i++){
        cin >> br[i];
    }

    for(int i=0; i<m; i++){
        cout << br[i] <<" ";
    }
    return 0;
}