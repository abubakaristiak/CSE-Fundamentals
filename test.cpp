/*
Input: list1 = [1,2,4], list2 = [1,3,4]
Output: [1,1,2,3,4,4]
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> list1 = {1,2,4};
    // vector<int> list2 = {1,3,4};

    vector<int> list1, list2;
    int x;
    
    while (cin >> x && x!= -1)
    {
        list1.push_back(x);
    }

    while (cin >> x && x!= -1)
    {
        list2.push_back(x);
    }
    
    
    vector<int> result;

    int i=0, j=0; 
    while (i<list1.size() && j<list2.size())
    {
        if(list1[i] <= list2[j]){
            result.push_back(list1[i]);
            i++;
        }
        else{
            result.push_back(list2[j]);
            j++;
        }
    }

    while (i<list1.size())
    {
        result.push_back(list1[i]);
        i++;
    }
    while (j<list2.size())
    {
        result.push_back(list2[j]);
        j++;
    }

    for(int val: result){
        cout << val << " ";
    }
    
    
    
    return 0;
}