// #include <bits/stdc++.h>
// using namespace std;

// class Student {
//     int id;
//     char name[101]; 
//     char section;
//     int t_mark;
// };

// int main() {
//     int test;
//     cin >> test;
//     while (test--) {
//         Student students[3];
//         for (int i = 0; i < 3; i++) {
//             cin >> students[i].id>> students[i].name >> students[i].section >> students[i].t_mark;
//         }

//         Student* highest = new students[0];
//         for (int i = 1; i < 3; i++) {
//             if (students[i].t_mark > highest->t_mark || 
//                 (students[i].t_mark == highest->t_mark && students[i].id < highest->id)) {
//                 highest = &students[i];
//             }
//         }

//         cout << highest->id << " " << highest->name << " " << highest->section << " " << highest->t_mark << endl;
//     }

//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    int id;
    char name[101];
    char section;
    int t_mark;
};

int main() {
    int test;
    cin >> test;
    while (test--) {
        Student students[3];
        for (int i = 0; i < 3; i++) {
            cin >> students[i].id;
            cin.ignore(); 
            cin.getline(students[i].name, 101); 
            cin >> students[i].section >> students[i].t_mark;
        }

        Student* highest = &students[0];
        for (int i = 1; i < 3; i++) {
            if (students[i].t_mark > highest->t_mark || 
                (students[i].t_mark == highest->t_mark && students[i].id < highest->id)) {
                highest = &students[i];
            }
        }

        cout << highest->id<< " " << highest->name << " " << highest->section << " " << highest->t_mark << endl;
    }

    return 0;
}
