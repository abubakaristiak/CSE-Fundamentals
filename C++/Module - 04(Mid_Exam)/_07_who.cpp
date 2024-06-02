#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[1001];
    char section;
    int t_mark;;
};

int main() {
    int test;
    cin >> test;
    while (test--) {
        Student a1,b1,c1;

        cin>>a1.id>>a1.name>>a1.section>>a1.t_mark;
        cin>>b1.id>>b1.name>>b1.section>>b1.t_mark;
        cin>>c1.id>>c1.name>>c1.section>>c1.t_mark;
        
        if(a1.t_mark >= b1.t_mark && a1.t_mark >= c1.t_mark) cout<<a1.id<<" "<<a1.name<<" "<<a1.section<<" "<<a1.t_mark<<endl;
        else if(b1.t_mark >= a1.t_mark && b1.t_mark >= c1.t_mark) cout<<b1.id<<" "<<b1.name<<" "<<b1.section<<" "<<b1.t_mark<<endl;
        else if(c1.t_mark >= a1.t_mark && c1.t_mark >= b1.t_mark) cout<<c1.id<<" "<<c1.name<<" "<<c1.section<<" "<<c1.t_mark<<endl;
    }

    return 0;
}