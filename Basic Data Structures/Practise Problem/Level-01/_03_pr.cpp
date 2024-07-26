#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int cmd, val;
        cin >> cmd >> val;
        if(cmd == 1){
            if(v.size()<2){
                v.push_back(val);
            }
            else{
                v.insert(v.begin()+1, val);
            }
        }
        else if(cmd == 2){
            if(v.size()<2){
                v.push_back(val);
            }
            else{
                v.insert(v.end()-1, val);
            }
        }
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] <<" ";
    }
    
    return 0;
}