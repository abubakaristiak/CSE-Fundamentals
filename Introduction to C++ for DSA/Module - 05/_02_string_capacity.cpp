#include<bits/stdc++.h>
using namespace std;
int main()
{
    // size() function;
    string s= "Hello world";
    cout << s.size() << endl;

    // max_size() function;
    cout << s.max_size() << endl;

    // capacity function;
    string a = "haifdjfafaghghdhfghdghddkd";
    cout << a.capacity() << endl;

    // clear() function
    string s1 = "hello";
    cout << s1 << endl;
    s1.clear();
    cout << s1 << endl;
    cout << s1.size() << endl;

    // empty() function
    // string b; // print korbe empty;
    string b = "Hello"; // print korbe Not empty
    if(b.empty() ==true) cout << "Empty" << endl;
    else cout << "Not Empty" << endl;

    // resize() function
    string c;
    cin >> c;
    // s.resize(5);
    // s.resize(8); // jodi size increse kori tahole 5 ar pore garbas value asbe
    // s.resize(8, 'A');
    cout << s.size() << endl;
    cout << s << endl;
    return 0;
}