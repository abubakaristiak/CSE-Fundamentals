// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     string a, b;
//     while (cin >> a >> b)
//     {
//         int len1=a.length();
//         int len2=b.length();
//         bool flag=true;
//         for(int i=0; i<len2; i++){
//             for(int j=0; j<len1; j++){
//                 if(b[i] != a[j]){
//                     flag=false;
//                     break;
//                 }
//             }
//         }
//         if(flag) cout << "Possible"<<endl;
//         else cout << "Impossible" << endl;
//     }
    
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
//     string a, b;
//     while (cin >> a >> b)
//     {

//         map<char,int> mpa;
//         map<char,int> mpb;
//         int len1 = a.length();
//         int len2 = b.length();


//         for(int i=0; i<len1; i++){
//             mpa[a[i]]++;
//         }
//         for(int i=0; i<len2; i++){
//             mpb[b[i]]++;
//         }

//         set<char>st;
//         for(int i=0; i<len2; i++){
//             st.insert(b[i]);
//         }
//         bool flag=true;
//         for(auto ch:st){
//             if(mpa[ch]<mpb[ch]){
//                 flag=false;
//                 break;
//             }
//         }

//         if(flag) cout << "Possible"<<endl;
//         else cout << "Impossible" << endl;
//     }
    
//     return 0;
// }



#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string a, b;
    while (cin >> a >> b)
    {

        int i = 0;
        int j = 0;
        int n = a.size();
        int m = b.size();
        while (i<n && j<m){
            if (a[i]==b[j]){
                j++;
            }
            i++;
        }
        if (j==m) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
    return 0;
}