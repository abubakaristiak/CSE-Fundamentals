#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;          // step cout hobe -> 1
    cin >> N;       // step cout hobe -> 1
    int ar[N];      // step cout hobe -> 1
    for(int i=0; i<N; i++){  // O(N)
        cin >> ar[i];   // step cout hobe -> N
    }
    int s = 0;      // step cout hobe -> 1
    for(int i=0; i<N;i++){  // O(N)
        s +=ar[i];   // step cout hobe -> N
    }
    cout << s<< endl;  // step cout hobe -> 1
                        //------------------------------
                        // max count hobe -> N;
                        // time complexity -> O(N); Big O notation
    return 0;
}