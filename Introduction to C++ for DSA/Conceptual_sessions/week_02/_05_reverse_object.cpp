#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int mark;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0; i<n; i++){
        cin >> a[i].id >> a[i].name >>a[i].mark;
    }

    int i=0; 
    int j= n-1;
    while (i<j)
    {
        swap(a[i].mark, a[j].mark);
        i++;
        j--;
    }

    for(int i=0; i<n; i++){
        cout << a[i].id << " " << a[i].name << " " << a[i].mark <<endl;
    }
    
    return 0;
}