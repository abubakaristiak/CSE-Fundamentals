#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int frq[26] = {0};
    for(char c:s){
        frq[c-'a']++;
    }

    // print frequency array a to z;
    // for(char i='a'; i<='z'; i++){
    //     cout << i << " - " << frq[i-'a'] <<endl;
    // }

    for(char i='a'; i<='z'; i++){
        for(int j=0; j<frq[i-'a']; j++){
            cout <<i;
        }
    }
    return 0;
}