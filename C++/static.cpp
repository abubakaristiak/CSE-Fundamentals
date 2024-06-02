// #include <iostream>
// #include <string>
// using namespace std;

// class Student {
// public:
//     int ID;
//     string Name;
//     char Section;
//     int TotalMarks;

    
//     Student(int i, string n, char sec, int t_marks)
//     {
//         int id = i;
//         string name = n;
//         char section = sec;
//         int TotalMarks = t_marks;
//     }
// };

// int main() {
//     int test;
//     cin >> test;
    
//     while (test--) {
//         Student students[3];

        
//         for (int i = 0; i < 3; i++) {
//             int id;
//             string name;
//             char section;
//             int totalMarks;
//             cin >> id >> name >> section >> totalMarks;
//             students[i] = Student(id, name, section, totalMarks);
//         }

        
//         Student best_student = students[0];

        
//         for (int i = 1; i < 3; i++) {
//             if (students[i].TotalMarks > best_student.TotalMarks ||
//                 (students[i].TotalMarks == best_student.TotalMarks && students[i].ID < best_student.ID)) {
//                 best_student = students[i];
//             }
//         }

        
//         cout << best_student.ID << " " << best_student.Name << " " << best_student.Section << " " << best_student.TotalMarks << endl;
//     }

//     return 0;
// }
