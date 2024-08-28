#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["kazi wazida Rahman"] = 98;   // O(logN)
    mp.insert({"istiak", 44});
    mp.insert({"Asadullah", 88});
    mp["sobuj"] = 90;

    for(auto it=mp.begin(); it != mp.end(); it++)  
    {
        cout << it->first << " " << it->second << endl;     // O(logN)
    }

    cout << mp.count("istiak") << endl;
    return 0;
}