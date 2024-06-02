//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);

    stringstream ss;
    ss << s;

    string word;
    reverse(word.begin(), word.end());
    cout << word;
    while (ss>> word)
    {
        reverse(word.begin(), word.end());
        cout << " "<< word;
    }
    
    return 0;
}