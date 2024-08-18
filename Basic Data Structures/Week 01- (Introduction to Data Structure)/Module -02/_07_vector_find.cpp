#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v={1,3,4,3,6,77,3,56,3,7,56,3};
    // vector<int>:: iterator it;
    // it = find(v.begin(),v.end(),3);
    // cout <<*it;



    // shortcut with auto
    vector<int> v={1,3,4,3,6,77,3,56,3,7,56,3};
    auto it = find(v.begin(),v.end(),100);
    // if(it == v.end()) cout <<"Not found";
    // else cout <<"Found";
    cout << *it;
    return 0;
}