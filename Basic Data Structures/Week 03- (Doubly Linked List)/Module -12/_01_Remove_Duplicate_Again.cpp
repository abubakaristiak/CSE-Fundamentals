#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> amerList;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1) break;   
        amerList.push_back(val);
    }
    amerList.sort();
    amerList.unique();
    
    for(int val: amerList){
        cout << val << " ";
    }
    return 0;
}