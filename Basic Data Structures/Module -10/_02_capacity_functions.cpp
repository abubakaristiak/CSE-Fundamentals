#include<bits/stdc++.h>
using namespace std;
int main()
{

    list<int> myList = {10, 20, 30};
    // max size:
    cout << myList.max_size()<<endl;

    //clear list;
    myList.clear();
    for(int val:myList){
        cout << val <<endl;
    }
    cout << myList.size()<<endl;


    // resize list:
    list<int> myList = {10, 20, 30};
    myList.resize(2);
    myList.resize(5);
    for(int val: myList){
        cout << val <<endl;
    }

    
    return 0;
}