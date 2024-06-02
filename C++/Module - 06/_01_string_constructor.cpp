#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string declare
    // string s = "hello world";
    // string declare with object
    // string s("hello world");

    // in specific index  before print
    string s("Hello world", 4);
    cout << s << endl;

    // in specific index after print
    string a = "bangladesh";
    string(a,4);
    cout << a << endl;

    // one value print in many times
    string b(26, 'a');
    cout << b << endl;

    return 0;
}