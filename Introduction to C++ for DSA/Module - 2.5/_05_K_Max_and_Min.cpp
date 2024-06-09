//https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
#include <bits/stdc++.h>
using namespace std;
int main()
{
    
    int a,b,c;
    cin >> a >>b >>c;

    int ar[3] = {a,b,c};
    int max = ar[0];
    int min = ar[0];
    for (int i = 1; i < 3; i++)
    {
        if (ar[i] >= max)
        {
            max = ar[i];
        }
        if (ar[i] <= min)
            min = ar[i];
    }
    cout << min << " "<<max;
}