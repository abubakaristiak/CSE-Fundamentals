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
    // dynamic object declare
    Person* istiak = new Person("abu bakar", 19);
    Person* wazida = new Person("wazida rahman", 18);

    // copy element istiak to wazida;
    // istiak->name= wazida->name;
    // istiak->age = wazida->age;

    // shortcut copy element istiak to wazida
    *istiak = *wazida;
    delete wazida;
    cout << istiak->name << " " << istiak->age << endl;



    return 0;
}