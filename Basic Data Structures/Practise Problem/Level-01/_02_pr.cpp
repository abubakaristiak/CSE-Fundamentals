#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    vector<int> result(n);
    int sum = 0; 
    for(int i=n-1; i>=0; i--){
        result[i] = sum;
        sum +=v[i];
    }
    
    for(int i=0; i<result.size(); i++){
        cout << result[i] <<" ";
    }
    return 0;
}