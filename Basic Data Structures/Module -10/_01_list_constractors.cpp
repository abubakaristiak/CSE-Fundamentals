#include<bits/stdc++.h>
using namespace std;
int main()
{
    // list<int> myList;
    list<int>myList(10,5);
    /*list ar moddhe i diya value access kora jai na. ai jonne iterator use korte hoi*/    
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << *it <<endl; 
    }
    return 0;
}

//Copy element one list to another list;
#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> list2 = {1,2,3,4,5};
    list<int> myList(list2);
    
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << *it <<endl; 
    }
    return 0;
}

// copy element from array.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5] = {11,22,33,44,55};
    list<int> myList(a, a+5);
    
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << *it <<endl; 
    }
    return 0;
}

// copy from vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {121, 232, 343, 454};
    list<int> myList(v.begin(), v.end());
    
    for(auto it = myList.begin(); it != myList.end(); it++){
        cout << *it <<endl; 
    }
    return 0;
}


// copy from vector with shortcut loop 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {121, 232, 343, 454};
    list<int> myList(v.begin(), v.end());
    
    // for(auto it = myList.begin(); it != myList.end(); it++){
    //     cout << *it <<endl; 
    // }
    for(int val: myList){
        cout << val <<endl;
    }
    return 0;
}


 