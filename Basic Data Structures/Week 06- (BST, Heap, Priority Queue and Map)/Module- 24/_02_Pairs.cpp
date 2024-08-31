//https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-05/challenges
#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    string name;
    int  roll;
    Student(string name, int  roll){
        this->name = name;
        this->roll = roll;
    }
};
class cmp{
public: 
    bool operator()(Student a, Student b){
        if(a.name > b.name) return true;
        else if(a.name < b.name) return false;
        else{
            if(a.roll < b.roll) return true;
            else return false;  
        }
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    priority_queue<Student, vector<Student>, cmp> pq;
    int n; cin>> n;
    while(n--)
    {
        string name; int roll; 
        cin >> name >> roll; 
        Student obj(name, roll);
        pq.push(obj);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }
    
    
    return 0;
}