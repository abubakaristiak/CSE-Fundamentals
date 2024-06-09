#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        int marks1;
        int marks2;
        Person(string n, int a, int m1, int m2){
            name = n;
            age = a;
            marks1 = m1;
            marks2 = m2;
        }
        void hello()
        {
            cout << "hello world" << endl;
            cout << name << " " << age << endl; // value access using function
            
        }
        int total_marks()
        {
            return marks1+marks2;
        }
};
int main()
{
    Person istiak("Abu Bakar", 19, 67, 92);
    cout << istiak.name << " " << istiak.age << endl;
    istiak.hello();
    cout << istiak.total_marks() << endl;
    return 0;
}