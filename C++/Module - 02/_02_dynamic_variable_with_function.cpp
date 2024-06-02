#include <bits/stdc++.h>
using namespace std;
int *fun()
{
    int *a = new int;
    cout << "fun: "<< a <<endl;
    *a = 100;
    return a;
}
int main()
{
    int *p = fun();
    cout << "main:" << p << endl;
    cout << "main:" << *p << endl;
}