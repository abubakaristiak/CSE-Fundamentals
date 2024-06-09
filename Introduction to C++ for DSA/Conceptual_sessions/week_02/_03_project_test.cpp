#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int id;
    string name;
    int bangla_mark;
    int english_mark;
    int math_mark;
    int bgs_mark;
    int science_mark;
    int ict_mark;

    int total;
    double avg;
    string gpa;
    int roll;
};
bool cmp(Student a, Student b)
{
    if (a.total > b.total)
    {
        return true;
    }
    else if (a.total < b.total)
    {
        return false;
    }
    else
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];
    int plus_count = 0;
    int fail_count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].id >> a[i].name >> a[i].bangla_mark >> a[i].english_mark >> a[i].math_mark >> a[i].bgs_mark >> a[i].science_mark >> a[i].ict_mark;

        a[i].total = a[i].bangla_mark + a[i].english_mark + a[i].math_mark + a[i].bgs_mark + a[i].science_mark + a[i].ict_mark;
        a[i].avg = (double)a[i].total / 6;

        if (a[i].avg >= 80)
        {
            a[i].gpa = "A+";
            plus_count++;
        }
        else if (a[i].avg >= 70)
        {
            a[i].gpa = "A";
        }
        else if (a[i].avg >= 60)
        {
            a[i].gpa = "A-";
        }
        else if (a[i].avg >= 50)
        {
            a[i].gpa = "B";
        }
        else if (a[i].avg >= 40)
        {
            a[i].gpa = "C";
        }
        else if (a[i].avg >= 33)
        {
            a[i].gpa = "D";
        }
        else
        {
            a[i].gpa = "F";
            fail_count++;
        }
    }

    sort(a, a + n, cmp);
    cout << "\n\nRoll\tID\tName\tBang\tEng\tMath\tBGS\tScience\tICT\tTotal\tAvg\tGPA\n";
    cout << "------------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "\t" << a[i].id << "\t" << a[i].name << "\t" << a[i].bangla_mark << "\t" << a[i].english_mark << "\t" << a[i].math_mark << "\t" << a[i].bgs_mark << "\t" << a[i].science_mark << "\t" << a[i].ict_mark << "\t" << a[i].total << "\t" << fixed << setprecision(2) << a[i].avg << "%\t" << a[i].gpa << endl;
    }
    cout << "Total A+ = " << plus_count << endl;
    cout << "Total Pass = " << n - fail_count << endl;
    cout << "Total Fail = " << fail_count << endl;

    return 0;
}