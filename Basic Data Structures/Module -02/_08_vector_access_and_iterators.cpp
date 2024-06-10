#include<bits/stdc++.h>
using namespace std;
int main()
{
    // element access;
    vector<int> v={1,2,3,4,5};
    cout << v[v.size()-1]<<endl;   // last element print
    cout <<v.back() << endl;      // last element print
    cout <<v[0] <<endl;             // first element print
    cout << v.front() << endl;      // first element print


    // iterators
    vector<int> v2={11,12,13,14,15};
    // vector<int> ::iterator it;           ata na leka loop ar moddhe auto lekle automatically iterator create hoya jai.

    for(auto it=v2.begin();it<v2.end(); it++){
        cout <<*it<<" ";
    }
    return 0;
}