#include<bits/stdc++.h>
using namespace std;
int main()
{
    // // max_size();
    // vector<int> v;
    // cout << v.max_size()<<endl;


    // // capacity();
    // vector<int> v;
    // cout <<v.capacity()<<endl;
    // v.push_back(10);
    // cout <<v.capacity() <<endl;
    // v.push_back(20);
    // cout<<v.capacity() <<endl;
    // v.push_back(30);
    // cout << v.capacity() <<endl;
    // v.push_back(40);
    // cout << v.capacity() <<endl;
    //  v.push_back(50);
    // cout << v.capacity() <<endl;


    // // clear();
    // vector<int> v;
    // v.push_back(10);
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v.push_back(50);

    // v.clear();
    // cout<<v.size()<<endl;
    // for(int i=0; i<v.size(); i++){
    //     cout << v[i]<<" ";
    // }
    // cout << v[4] <<endl;    // memory te store ashe.but array teke clear


    // resize();
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);

    v.resize(2);
    v.resize(8, 100);
    cout<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i]<<" ";
    }
    return 0;
}