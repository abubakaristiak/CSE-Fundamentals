#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;          // step cout hobe -> 1
    cin >> n;       // step cout hobe -> 1
    int ar[n];      // step cout hobe -> 1
    for(int i=0; i<n; i++){
        cin >> ar[i];   // step cout hobe -> n
    }
    int s = 0;      // step cout hobe -> 1
    for(int i=0; i<n;i++){
        s +=ar[i];   // step cout hobe -> n
    }
    cout << s<< endl;  // step cout hobe -> 1
                        //------------------------------
                        // max count hobe -> n;
                        // time complexity -> O(n); Big O notation
    return 0;
}