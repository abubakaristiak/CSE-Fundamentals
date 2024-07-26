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
    for(int i=0; i<n; i++){
        int mx = INT_MIN;
        for(int j=i+1; j<n; j++){
            if(v[j]>mx){
                mx = v[j];
            }
        }
        // result[i] = (mx == INT_MIN) ? 0 : mx;
        if(mx == INT_MIN){
            result[i] = 0;
        }
        else{
            result[i] = mx;
        }
    }

    for(int i=0; i<n; i++){
        cout << result[i] <<" ";
    }
    return 0;
}