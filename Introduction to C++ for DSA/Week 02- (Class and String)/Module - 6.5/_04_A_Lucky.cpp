//https://codeforces.com/contest/1676/problem/A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int i=0; i<test; i++){
        string s;
        cin >> s;
        int length = s.length();
        int first_sum = 0;
        int last_sum = 0;
        for(int i=0; i<length/2; i++){
            first_sum = first_sum + (s[i]-'0');
        }

        for(int i=(length/2); i<length; i++){
            last_sum = last_sum + (s[i]-'0');
        }
        if(first_sum == last_sum){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}