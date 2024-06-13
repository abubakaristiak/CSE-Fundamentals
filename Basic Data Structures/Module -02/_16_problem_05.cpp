#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1st part
    int n, num;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int old_val, new_val;
    cin >> old_val >> new_val;

    replace(v.begin(), v.end(), old_val, new_val);

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    // 2nd part
    int find_value;
    cin >> find_value;
    int idx = -1;

    for (int i = 0; i < n; i++)
    {
        if (v[i] == find_value)
        {
            idx = i;
            break;
        }
    }
    cout << idx << endl;
    return 0;
}