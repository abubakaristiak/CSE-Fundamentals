//https://docs.google.com/document/d/1vcBz2ZOMY5Bcmh5b0zpRaGdwp3dU9C2Q/edit
#include <bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *ar = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    return ar;
}
int main()
{
    int n;
    cin >> n;
    int *ar = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}