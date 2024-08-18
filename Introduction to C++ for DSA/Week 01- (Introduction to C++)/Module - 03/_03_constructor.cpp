#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    int roll;
    int cls;
    double gpa;
    //constructor
    Student(int r, int c, double g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    Student istiak(129, 12, 4.90);
    Student wazida(130, 12, 4.90);

    cout << istiak.roll <<" " <<istiak.cls << " "<<istiak.gpa <<endl;
    cout << wazida.roll << " " << wazida.cls << " " << wazida.gpa <<endl;
    return 0;
}