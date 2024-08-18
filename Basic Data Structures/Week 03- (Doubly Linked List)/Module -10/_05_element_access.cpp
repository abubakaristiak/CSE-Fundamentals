#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> myList = {10, 20, 30, 40};
    cout << myList.front()<<endl;               // 1st element;
    cout <<myList.back()<<endl;                 // last element;
    
    cout << *next(myList.begin(), 2)<<endl;     // at any position element;

    return 0;
}