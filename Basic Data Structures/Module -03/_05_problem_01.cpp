//https://docs.google.com/document/d/17-KbwPM7OlGVHWDyDqgjjTodKjy9xoo0ez0T1lr6UQc/edit#heading=h.og8byhqqaziy

// O(N)

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int ar[n];
//     for(int i=0; i<n; i++){
//         cin >> ar[i];
//     }
//     int x;
//     cin >> x;
//     bool flag = false;
//     for(int i=0; i<n-1; i++){
//         for(int j=i+1; j<n; j++){
//             if(ar[i]==ar[j]){
//                 flag = true;
//             }
//         }
//     }
//     if(flag==true){
//         cout << "true" << endl;
//     }
//     else{
//         cout << "false" << endl;
//     }
//     return 0;
// }


// O(logN) -> better complexity
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }
    int x;
    cin >> x;
    bool flag = false;
    int l=0, r=n-1;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(x == ar[mid]){
            flag=true;
            break;
        }
        if(x>ar[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    if(flag==true){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}