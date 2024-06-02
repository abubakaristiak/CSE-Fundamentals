//https://codeforces.com/contest/1703/problem/B
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    for(int i=0; i<test; i++){
        int n; 
        cin >> n;

        bool sp[26] = {false};

        int total_b = 0;
        for(int i=0; i<n; i++){
            char c;
            cin >> c;

            int c_idx = c-'A';
            if(!sp[c_idx]){
                total_b +=2;
                sp[c_idx]=true;
            }
            else{
                total_b +=1;
            }
        }
        cout << total_b << endl;
    }
    return 0;
}