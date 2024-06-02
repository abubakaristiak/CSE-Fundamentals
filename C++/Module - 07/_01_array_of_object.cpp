#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];  // staticlly declare
    // Student *a = new Student a[n];    dynamically declare
    for(int i=0; i<n; i++){
        cin.ignore();
        getline(cin, a[i].name);
        cin>> a[i].roll >> a[i].marks;
    }

    for(int i=0; i<n; i++){
        cout << a[i].name << " " << a[i].roll << " " <<a[i].marks <<endl;
    }
    return 0;
}