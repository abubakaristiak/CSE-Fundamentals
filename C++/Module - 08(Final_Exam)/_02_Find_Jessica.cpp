#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    
    stringstream ss;
    ss<<s;
    string word;
    int flag = 0;
    while (ss>>word)
    {
        if(word == "Jessica"){
            flag = 1;
        }
    }
    if(flag==1){
        cout <<"YES" << endl;
    }
    else{
        cout << "NO" <<endl;
    }
    return 0;
}