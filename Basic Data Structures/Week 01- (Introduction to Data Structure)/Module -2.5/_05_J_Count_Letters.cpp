//https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;
//     int cnt[26] = {0};
//     for(int i=0; i<s.length(); i++){
//         int value = s[i]-'a';
//         cnt[value]++;
//     }

//     for(int i=0; i<26; i++){
//         if(cnt[i]>0){

//         cout << (char) (i+'a') <<" : "<<cnt[i]<<endl;
//         }
//     }
//     return 0;
// }


// Using vector
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    vector<int> cnt(26,0);
    for(int i=0; i<s.length(); i++){
        int value = s[i]-'a';
        cnt[value]++;
    }

    for(int i=0; i<26; i++){
        if(cnt[i]>0){

        cout << (char) (i+'a') <<" : "<<cnt[i]<<endl;
        }
    }
    return 0;
}