//https://www.hackerrank.com/contests/assignment-01-a-basic-data-structure-a-batch-05/challenges/sorted-2-2
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin >> v[i];
        }
        bool flag = true;
        for(int i=0; i<n-1; i++){
            if(v[i] > v[i+1]){
                flag = false;
                break;
            }
        }
        
        if(flag==true){
            cout << "YES"<<endl;
        }
        else{
            cout << "NO"<<endl;
        }
    }
    
    return 0;
}