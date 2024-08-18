//https://www.hackerrank.com/contests/mid-term-a-introduction-to-c-for-dsa-a-batch-05/challenges
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    char section;
    int t_mark;
    Student(int id, string name, char section, int t_mark)
    {
        this->id = id;
        this->name = name;
        this->section = section;
        this->t_mark = t_mark;  
    }
};
int main()
{
    int test;
    cin>>test;
    while(test--){
        Student* t_students[3];
        for(int i=0; i<3; i++){
            int id;
            string name;
            char section;
            int t_mark;
            cin>> id >> name >> section >> t_mark;
            t_students[i] = new Student(id,name,section,t_mark);
        }

        Student *higest = t_students[0];
        for(int i=1; i<3; i++){
            if(t_students[i]->t_mark > higest->t_mark || (t_students[i]->t_mark == higest->t_mark) && t_students[i]->id <higest->id)
            {
                higest = t_students[i];
            }
        }
        cout << higest->id <<" " << higest->name <<" " << higest->section <<" "<<higest->t_mark <<endl;
        for(int i=0; i<3; i++){
            delete t_students[i];
        }


    }
    
    return 0;
}