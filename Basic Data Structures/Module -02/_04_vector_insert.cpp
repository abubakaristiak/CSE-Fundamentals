#include<bits/stdc++.h>
using namespace std;
int main()
{
    // jodi specific index ar moddhe only akta value add korte ci
    vector<int> v = {1,2,3,4,5};
    v.insert(v.begin()+2,10);
    for(int x:v){
        cout << x <<" ";
    }






    vector<int> v = {1,2,3,4,5};
    vector<int> v2 = {101,102,103};
    v.insert(v.begin()+2,v2.begin(),v2.end());
    for(int x:v){
        cout << x <<" ";
    }
    return 0;
}