#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "hello";
    string b = "world";

    // assign value;
    // a = "Gelo";
    a.assign("gelo");
    cout << a << endl;

    // specific index value delete korra jonno(erase function)
    string a1 = "HelloWorld";
    // a1.erase(4,1);
    // cout << a1 << endl;

    // replace function;
    // a1.replace(4,3,"so");
    // cout << a1 << endl;

    // insert function;
    a1.insert(5,"Istiak");
    cout << a1 << endl;
    return 0;
}