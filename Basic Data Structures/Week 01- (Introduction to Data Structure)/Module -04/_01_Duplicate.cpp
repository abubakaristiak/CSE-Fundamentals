//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/duplicate-12
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    bool flag = false;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(v[i]==v[j]){
                flag = true;
                break;
            }
        }
    }
    if(flag==true){
        cout << "YES" <<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    return 0;
}