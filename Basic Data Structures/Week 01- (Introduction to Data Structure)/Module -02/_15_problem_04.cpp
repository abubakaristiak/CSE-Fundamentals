#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    for(int i=1; i<=10; i++){
        v.push_back(i);
    }

    cout<<v.size()<<endl;
    cout <<v.capacity()<<endl;
    cout << v.max_size()<<endl;

    v.resize(20,0);
    cout<< v.size()<<endl;
    cout <<v.capacity()<<endl;
    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;

    v.clear();
    cout<<v.size()<<endl;
    cout <<v.capacity()<<endl;

    cout<<(v.empty()? "YES":"NO")<<endl;

    v.resize(10,100);
    cout<< v.size()<<endl;
    cout <<v.capacity()<<endl;

    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    return 0;
}