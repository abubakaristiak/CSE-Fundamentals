#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char sec;
        int id;
        int math_marks;
        int eng_marks;

        int total;
};
int main()
{
    int n;
    cin >> n;
    Student a[n];
    for(int i=0;i<n;i++){
        cin >> a[i].name>>a[i].cls>>a[i].sec>>a[i].id>>a[i].math_marks>>a[i].eng_marks;

        a[i].total = a[i].math_marks+a[i].eng_marks;
    }
    for(int i=0; i<n-1;i++){
        for(int j=i+1; j<n; j++){
            if(a[i].total < a[j].total){
                swap(a[i], a[j]);
            }
            if(a[i].total == a[j].total){
                if(a[i].id > a[j].id){
                    swap(a[i],a[j]);
                }
            }
        }
    }
     for(int i=0; i<n;i++){
        cout << a[i].name << " "<<a[i].cls <<" "<<a[i].sec <<" "<<a[i].id << " "<<a[i].math_marks<<" "<<a[i].eng_marks << endl;
    }

   

    return 0;
}