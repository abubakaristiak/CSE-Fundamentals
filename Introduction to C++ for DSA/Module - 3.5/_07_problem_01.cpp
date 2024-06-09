#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll; 
    char section;
    int math_marks;
    int cls;
    Student(const char* name, int roll, char section, int math_marks,int cls)
    {
        strcpy(this->name, name);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;

    }
};
int main()
{
    Student a1("Abu Bakar", 534, 'A', 95, 10);
    Student b1("Kazi Wazida", 809, 'A', 98, 10);
    Student c1("Sobuj", 100, 'B', 92, 12);
    int max = a1.math_marks;
    if((a1.math_marks>b1.math_marks) && (a1.math_marks > c1.math_marks))
    {
        cout << a1.name;
    }
    else if((b1.math_marks>c1.math_marks) && (b1.math_marks > a1.math_marks))
    {
        cout << b1.name;
    }
    else{
        cout << c1.name;
    }


    
    return 0;
}