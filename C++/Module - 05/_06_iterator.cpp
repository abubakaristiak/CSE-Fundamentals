#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    // manual loop for iteration;
    // for(int i=0; i<s.size(); i++)
    // {
    //     cout << s[i] << endl;
    // }
    // cout << *s.begin() << endl; // first index
    // cout << *(s.end()-1) << endl; // last index
    
    // iteration for string;
    // string:: iterator it; -> auto
    for(auto it = s.begin(); it<s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}