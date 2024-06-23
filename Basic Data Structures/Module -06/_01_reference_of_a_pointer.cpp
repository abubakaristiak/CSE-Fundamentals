#include<bits/stdc++.h>
using namespace std;
void fun(int *p)
{
    *p = 20;
}
int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << val <<endl;
    return 0;
}