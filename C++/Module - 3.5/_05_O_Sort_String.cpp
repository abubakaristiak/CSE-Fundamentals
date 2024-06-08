// #include<bits/stdc++.h>
// using namespace std;
// void bubblesort(string &s, int n){
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j=n-i-1; j++){
//             if(s[j] > s[j+1]){
//                 char temp = s[j];
//                 s[j] = s[j+1];
//                 s[j+1] = temp;
//             }
//         }
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;
//     bubblesort(s,n);

//     cout << s << endl;
//     return 0;
// }

//https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int freq[26] = {0};
    for(int i=0; i<n; i++){
        char ch;
        cin >> ch;
        freq[ch-97]++;
    }
    for(int i=0; i<26; i++){
        while (freq[i]>0)
        {
            cout << (char)(i+97);
            freq[i]--;
        }
        
    }
    return 0;
}