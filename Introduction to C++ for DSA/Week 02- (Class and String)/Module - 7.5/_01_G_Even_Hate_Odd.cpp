//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        int n;
        cin >> n;
        int ar[n];
        for(int i=0; i<n; i++){
            cin >> ar[i];
        }
        int even_count = 0;
        int odd_count = 0;
        for(int i=0; i<n; i++){
            if(ar[i] % 2 ==0){
                even_count++;
            }
            else{
                odd_count++;
            }
        }

        if(even_count == odd_count){
            cout << 0 <<endl;
        }
        else if(abs(even_count - odd_count) %2 == 0){
            cout << abs(even_count-odd_count) /2 <<endl;
        }
        else{
            cout << -1 <<endl;
        }
    }
    
    return 0;
}