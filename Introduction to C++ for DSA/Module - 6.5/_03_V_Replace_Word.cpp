#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    
    while (str.find("EGYPT") != -1)
    {
        str.replace(str.find("EGYPT"), 5, " ");
    }
    
    cout << str;
    return 0;
}