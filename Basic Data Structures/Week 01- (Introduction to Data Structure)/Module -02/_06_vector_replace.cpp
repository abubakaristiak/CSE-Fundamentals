#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v={1,3,4,3,6,77,3,56,3,7,56,3};
    replace(v.begin(),v.end(),3,99);
    for(int x:v){
        cout << x <<" ";
    }
    return 0;
}