//https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    int ar[n];
    for(int i = 0; i<n; i++){
        cin >> ar[i];
    }
    int flag = 0;
    int i = 0; 
    int j = n-1;
    while(i<j){
        if(ar[i] != ar[j]){
            flag = 1;
            break;
        }
        i++;
        j--;
    }
    
    if(flag == 1){
        cout << "NO" <<endl;
    }
    else{
        cout << "YES" << endl;
    }
    return 0;
}