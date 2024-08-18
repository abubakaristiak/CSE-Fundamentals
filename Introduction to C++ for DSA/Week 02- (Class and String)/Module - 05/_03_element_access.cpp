#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // first index:
    cout << s[0] << endl;
    cout << s.at(0) << endl;
    cout << s.front() << endl;

    // last index:
    cout << s[s.size()-1] << endl;
    cout << s.back() <<endl;


    return 0;
}