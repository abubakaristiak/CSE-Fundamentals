#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a = 5;
    // int* a_ptr = &a;

    // cout << a <<endl;
    // cout << &a << endl;

    // cout << a_ptr <<endl;
    // cout << "Dereference: "<< *a_ptr <<endl;
    // cout << &a_ptr <<endl;

    int a = 5; 
    int *b = &a;
    int **c = &b;

    cout<<a <<endl;
    cout<<&a <<endl;

    cout<<b <<endl;
    cout<<&b <<endl;

    cout <<**c<<endl;

}