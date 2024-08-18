//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/printing-x
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int rows,col;
    cin >> rows;
    col = rows;
    int ar[rows][col];
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            if(i==j && i+j!=rows-1){
                cout << "\\";
            }
            else if(i==j && i+j==rows-1){
                cout << "X";
            }
            else if(i+j==rows-1 && i!=j){
                cout << "/";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}






// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int n;
//     cin >> n;
//    int d=n/2;
//     int a[n-1][n-1];
    
//     for(int i=0;i<n;i++){
//         for(int j=0;j<n;j++){
//            if(i==j && i+j!=(n-1)) cout<<"\\";
//            else if(i==j && i+j==(n-1)) cout<<"X";
//            else if(i+j==n-1 && i!=j) cout<<"/";
//            else cout<<" ";


//         }
//         cout<<endl;
//     }

//     return 0;
// }