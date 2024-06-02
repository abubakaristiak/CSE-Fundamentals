// // #include<bits/stdc++.h>
// // using namespace std;
// // int* get_array(int n){
// //     int *ar = new int[n];
// //     for(int i=0; i<n; i++){
// //         cin>>ar[i];
// //     }
// //     return ar;
// // }
// // int main()
// // {
// //     int n;
// //     cin>> n;
// //     int* ar = get_array(n);
// //     for(int i=0; i<n; i++){
// //         cout << ar[i] << " ";
// //     }
// //     return 0;
// // }



// #include <iostream>
// #include <string>
// using namespace std;

// // Define a class to hold student information
// class Student {
// public:
//     int ID;
//     string Name;
//     char Section;
//     int TotalMarks;

//     // Constructor to initialize a student object
//     Student(int id, string name, char section, int totalMarks) {
//         ID = id;
//         Name = name;
//         Section = section;
//         TotalMarks = totalMarks;
//     }
// };

// int main() {
//     int T;
//     cin >> T; // Read number of test cases

//     while (T--) {
//         Student* students[3];

//         // Read details of three students
//         for (int i = 0; i < 3; i++) {
//             int id;
//             string name;
//             char section;
//             int totalMarks;
//             cin >> id >> name >> section >> totalMarks;
//             students[i] = new Student(id, name, section, totalMarks);
//         }

//         // Initialize the best student as the first one
//         Student* best_student = students[0];

//         // Compare each student to find the best one
//         for (int i = 1; i < 3; i++) {
//             if (students[i]->TotalMarks > best_student->TotalMarks || 
//                (students[i]->TotalMarks == best_student->TotalMarks && students[i]->ID < best_student->ID)) {
//                 best_student = students[i];
//             }
//         }

//         // Print the details of the best student
//         cout << best_student->ID << " " << best_student->Name << " " << best_student->Section << " " << best_student->TotalMarks << endl;

//         // Clean up dynamically allocated memory
//         for (int i = 0; i < 3; i++) {
//             delete students[i];
//         }
//     }

//     return 0;
// }







// #include <iostream>
// #include <string>
// using namespace std;


// class Student {
// public:
//     int ID;
//     string Name;
//     char Section;
//     int TotalMarks;

    
//     Student() {
//         ID = 0;
//         Name = "";
//         Section = 'A';
//         TotalMarks = 0;
//     }
// };

// int main() {
//     int T;
//     cin >> T;

//     while (T--) {
//         Student students[3];

        
//         for (int i = 0; i < 3; i++) {
//             cin >> students[i].ID >> students[i].Name >> students[i].Section >> students[i].TotalMarks;
//         }

        
//         Student best_student = students[0];

        
//         for (int i = 1; i < 3; i++) {
//             if (students[i].TotalMarks > best_student.TotalMarks ||
//                (students[i].TotalMarks == best_student.TotalMarks && students[i].ID < best_student.ID)) {
//                 best_student = students[i];
//             }
//         }

        
//         cout << best_student.ID << " " << best_student.Name << " " << best_student.Section << " " << best_student.TotalMarks << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string str;
//     while (getline(cin, str)) {
//         // Sorting the string in ascending order
//         int len = str.length();
//         for (int i = 0; i < len - 1; i++) {
//             for (int j = i + 1; j < len; j++) {
//                 if (str[i] > str[j]) {
//                     char temp = str[i];
//                     str[i] = str[j];
//                     str[j] = temp;
//                 }
//             }
//         }

//         // Printing the sorted string
//         cout << str << endl;
//     }
//     return 0;
// }


// monkey problem
#include <iostream>
#include <string>
using namespace std;

int main() {
    string ar;
    while (getline(cin, ar)) {
        int len = ar.length();
        int freq[26] = {0}; // Array to store the frequency of each character
        
        // Update the frequency array
        for (int i = 0; i < len; i++) {
            if (ar[i] != ' ') {
                freq[ar[i] - 'a']++;
            }
        }
        
        // Print characters based on frequency array
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < freq[i]; j++) {
                cout << (char)('a' + i);
            }
        }
        cout << endl;
    }
    return 0;
}
