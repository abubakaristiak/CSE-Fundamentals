#include <iostream>
#include<string.h>
#include<string>
using namespace std;
int main()
{
    // string input without space
    // char s[100];
    // cin >> s;
    // cout << s << endl;
    // cout << strlen(s) << endl;

    // string input with space
    char s[100];
    int a;
    cin>>a;
    getchar();
    // fgets(s, 100, stdin); //it's use in c
    cin.getline(s, 100);
    cout<< a <<endl;
    cout << s << endl;
    
    return 0;
}