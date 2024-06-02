#include<bits/stdc++.h>
using namespace std;
namespace istiak
{
    string name = "Istiak";
    int age = 19;
    void hello()
    {
        cout << "hello friends, welcome to istiak's  namespaces";
    }
}
namespace wazida
{
    string name2 = "Wazida";
    int age2 = 18;
    void hello2()
    {
        cout << "hello friends, welcome to wazida's namespaces";
    }   
}
using namespace istiak;
using namespace wazida;
int main()
{
    cout << name << " " << age << endl;
    hello(); 
    cout << endl;
    cout << name2 << " " << age2 << endl;
    hello2();
    cout << endl;

    // manual add namespaces
    cout << wazida::name2 << endl;
    istiak::hello();
    return 0;
}