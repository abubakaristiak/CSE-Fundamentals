#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a,b;
    // manual input 
    // a.roll = 129;
    // a.cgpa = 3.95;
    // char temp[100] = "wazida";
    // strcpy(a.name, temp);

    // user input
    cin >> a.name >> a.roll >> a.cgpa;
    cin >> b.name >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}