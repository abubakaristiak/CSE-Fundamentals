#include<bits/stdc++.h>
using namespace std;
int main()
{
    // assign:
    list <int> mylist = {10, 20, 30, 40};
    list <int> newlist;
    newlist = mylist;   // most use and easiest way
    // newlist.assign(mylist.begin(), mylist.end());   // with assing function
    for(int val: newlist){
        cout << val <<endl;
    }


    // insert tail,head and delete tail,head with function
    list <int> mylist = {10, 20, 30, 40};
    mylist.push_back(100);
    mylist.push_front(5);
    mylist.pop_back();
    mylist.pop_back();
    mylist.pop_front();
    for(int val: mylist){
        cout << val <<endl;
    }


    // insert at position:
    list <int> yourList= {1,2,3,5};
    yourList.insert(next(yourList.begin(),3),4);
    for(int val: yourList){
        cout << val <<endl;
    }

    


    // Multiple value insert:
    list <int> yourList= {1,2,3,5};
    yourList.insert(next(yourList.begin(),3),{40,50,60});
    for(int val: yourList){
        cout << val <<endl;
    }

    // insert from another list:
    list <int> yourList= {1,2,3,5};
    list <int> addList = {40, 50, 60}; 
    yourList.insert(next(yourList.begin(),3), addList.begin(), addList.end());
    for(int val: yourList){
        cout << val <<endl;
    }

    // insert from vector:
    list <int> yourList= {1,2,3,5};
    vector <int> v = {40, 50, 60}; 
    yourList.insert(next(yourList.begin(),3), v.begin(), v.end());
    for(int val: yourList){
        cout << val <<endl;
    }

    // insert from array:
    list <int> yourList= {1,2,3,5};
    int ar[3] = {40, 50, 60}; 
    yourList.insert(next(yourList.begin(),3), ar, ar+3);
    for(int val: yourList){
        cout << val <<endl;
    }


    // erase/ delete element:
    list <int> yourList= {1,1,2,3,4,5};
    yourList.erase(next(yourList.begin(),1));
    for(int val: yourList){
        cout << val <<endl;
    }
    
    
    // Multiple erase/ delete element:
    list <int> yourList= {1,2,3,1,2,3,4,5};
    yourList.erase(next(yourList.begin(),3),next(yourList.begin(),6));
    for(int val: yourList){
        cout << val <<endl;
    }


    // replace 
    list <int> yourList= {10,20,20,30,40,20,50,20};
    replace(yourList.begin(), yourList.end(),20, 69);
    for(int val: yourList){
        cout << val <<endl;
    }



    // find
    list <int> yourList= {10,20,30,40};
    auto it = find(yourList.begin(), yourList.end(), 70);
    if(it == yourList.end()){
        cout << "Not found"<<endl;
    }
    else{
        cout << "Found"<<endl;
    }
    return 0;
} 