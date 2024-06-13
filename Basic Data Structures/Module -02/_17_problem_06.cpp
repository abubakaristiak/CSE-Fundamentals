// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int test;
//     cin >> test;
//     cin.ignore();
//     while (test--)
//     {
//         vector<string>v;
//         string s;
//         getline(cin,s);
//         v.push_back(s);

//         cout << v[0]<<endl;
//     }
    
    
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    cin.ignore();
    while (test--)
    {
        vector<string>v;
        string s;
        getline(cin,s);
        v.push_back(s);
        for(int i=0; i<v.size(); i++){
            if(v[i][0]>='a' && v[i][0]<='z'){
                v[i][0]-=32;
            }
        }
        cout << v[0]<<endl;
    }
    
    
    
    
    return 0;
}