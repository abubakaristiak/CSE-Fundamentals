#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    // stringstream ss;
    // ss<<s;
    string word;
    int cnt = 0;
    while(ss >> word)
    {
        cout << word << endl;
        cnt++;
    }
    cout<<"Total words: "<< cnt <<endl;
    return 0;
}