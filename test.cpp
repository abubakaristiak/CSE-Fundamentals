#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v = {1,2,3,4,5} ;
    vector<int> v2 = {101,102,103};

    v.insert(v.begin()+2 ,v2.begin(),v2.end()); // ভেক্টর টির ২ নাম্বার index ১০ insert হয়ে যাবে। 

    for(int  i =0 ;i< v.size() ;i++){
    cout << v[i] << " " ; 
    } 
    return 0;
}  