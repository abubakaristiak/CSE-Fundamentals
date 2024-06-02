//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    char o,e;
    cin >> a >> o >> b >> e >> c;
    if(o=='+'){
        if(a+b == c){
            cout << "Yes" <<endl;
        }
        else{
            cout << a+b;
        }
    }
    else if(o == '-'){
        if(a-b == c){
            cout << "Yes" <<endl;
        }
        else{
            cout << a-b;
        }
    }
    else if(o == '*'){
        if(a*b == c){
            cout << "Yes" <<endl;
        }
        else{
            cout << a*b;
        }
    }
    
    return 0;
}