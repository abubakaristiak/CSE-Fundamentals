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
int main(){
    
    Student rahim(323, 10, 4.90);
    Student *sobuj = new Student(323, 10, 4.90);
    cout << sobuj->roll << " "<< sobuj->cls <<" "<<sobuj->gpa<<endl;
    return 0;
}