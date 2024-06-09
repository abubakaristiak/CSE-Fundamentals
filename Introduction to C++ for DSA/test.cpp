#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T; 
    cin.ignore(); 

    while (T--) {
        string s, s1;
        getline(cin, s); 
        getline(cin, s1); 

        size_t h = s.find(s1);
        while (h != string::npos) {
            s.replace(h, s1.length(), "#"); 
            h = s.find(s1, h + 1);
        }

        cout << s << endl;
    }

    return 0;
}