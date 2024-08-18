#include<bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this-> gpa = gpa;
    }
};
Student *fun()
{
    Student *wazida = new Student(23, 11, 4.90);
    return wazida;
}
int main()
{
    Student *result =fun();
    cout << result->roll << " " << result->cls << " " << result->gpa <<endl;
    return 0;
}