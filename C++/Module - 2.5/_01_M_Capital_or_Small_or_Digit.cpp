//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char c;
    cin >> c;
    if (c >= 'A' && c <= 'Z')
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (c >= '0' && c <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
}