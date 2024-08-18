#include<bits/stdc++.h>
using namespace std;
int main()
{
    // // remove same element
    // list <int> myList = {10, 20, 10, 30, 10,40, 10};
    // myList.remove(10);
    // for(int val: myList){
    //     cout << val <<endl;
    // }


    // // sort ascending order:
    // list <int> myList = {10, 20, 10, 30, 10,40, 10};
    // myList.sort();
    // for(int val: myList){
    //     cout << val <<endl;
    // }


    // // sort descending order:
    // list <int> myList = {10, 20, 10, 30, 10,40, 10};
    // myList.sort(greater<int>());
    // for(int val: myList){
    //     cout << val <<endl;
    // }

    // // unique element print:
    // list <int> myList = {10, 20, 10, 30, 10, 40, 10,10 };
    // myList.sort();
    // myList.unique();
    // for(int val: myList){
    //     cout << val <<endl;
    // }


    // reverse element print:
    list <int> myList = {10, 20, 30, 40, 50};
    myList.reverse();
    for(int val: myList){
        cout << val <<endl;
    }

    return 0;
}