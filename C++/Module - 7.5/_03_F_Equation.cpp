// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/F
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int main()
{
    int base, power;
    cin>> base >> power;
    long long int sum = 0; 
    for(int i=2; i<=power; i+=2){
        sum = sum + pow(base,i);
    }
    cout << sum << endl;
    return 0;
}