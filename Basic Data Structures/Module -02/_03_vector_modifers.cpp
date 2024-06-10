#include<bits/stdc++.h>
using namespace std;
int main()
{
    // // O(1);   size same hole complexity kom.
    // vector<int> x={10,20,30};
    // vector<int> v={1,2,3};
    // v=x; //assign;
    // for(int i=0; i<v.size(); i++){
    //     cout << v[i] <<" ";
    // }

    // O(N);   size binno hole complexity vashi.
    vector<int> x={10,20,30,40};
    vector<int> v={1,2,3};
    v=x; //assign;
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    return 0;
}