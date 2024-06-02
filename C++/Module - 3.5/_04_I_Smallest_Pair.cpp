// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;

    for (int i = 0; i < test; i++)
    {
        int mn = INT_MAX;
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int value = ar[i] + ar[j] + (j - i);
                if(value <= mn){
                    mn = value;
                }
            }
        }
    cout << mn << endl;
    }
    return 0;
}