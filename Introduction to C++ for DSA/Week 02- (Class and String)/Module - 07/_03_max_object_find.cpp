#include<bits/stdc++.h>
#include<limits.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];  
    for(int i=0; i<n; i++){
        cin>> a[i].name >> a[i].roll >> a[i].marks;
    }
    Student mx;
    mx.marks = INT_MIN;

    for(int i=0; i<n; i++){
        if(a[i].marks > mx.marks){
            mx = a[i];
        }
    }
    cout << mx.name << " " << mx.roll << " "<< mx.marks << endl;
    return 0;
}