#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    Person wazida("Wazida Rahman", 18);
    cout << wazida.name << " " << wazida.age << endl;

    return 0;
}