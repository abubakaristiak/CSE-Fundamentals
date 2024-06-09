#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    // for(int i=0; i<n; i++){         // O(N*N);
    //     for(int j=0; j<n; j++){
    //         cout << "hello" << endl;
    //     }
    // }

    for(int i=0; i<n-1; i++){       // O(N*N)
        for(int j=i+1; j<n; j++){
            if(ar[i] > ar[j]){
                swap(ar[i],ar[j]);
            }
        }
    }
    return 0;
}