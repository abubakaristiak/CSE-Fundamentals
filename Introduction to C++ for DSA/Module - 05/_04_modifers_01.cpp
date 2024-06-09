#include<bits/stdc++.h>
using namespace std;
int main()
{
    // add two string
    string a = "hello";
    string b = "world";
    // manual operator use kore
    // a = a+b;
    // a+=b;
    // function use kore
    // a.append(b);
    // cout << a <<endl;
    // cout << b << endl;



    // last index a notun value add kora;
    // a = "helloA";
    // string c = 'A';
    // a = a+'A';
    // a = a+c;
    a.push_back('B'); // last index a value add kora
    a.pop_back(); // last index a value delete kora
    cout << a << endl;
    return 0;
}