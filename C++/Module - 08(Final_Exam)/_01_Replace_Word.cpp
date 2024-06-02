#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        string s, x;
        cin >> s >> x;
        int len = x.length();
        while (s.find(x) != -1)
        {
            s.replace(s.find(x),len,"#");
        }
        cout <<s<<endl;
    }
    
    
    return 0;
}