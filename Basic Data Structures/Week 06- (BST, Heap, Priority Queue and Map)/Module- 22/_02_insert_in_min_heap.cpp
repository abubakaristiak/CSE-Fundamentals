#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        v.push_back(x);

        int current_idx = v.size()-1;
        while (current_idx != 0)
        {
            int parent_idx = (current_idx-1)/2;
            if(v[parent_idx] > v[current_idx]) swap(v[parent_idx],v[current_idx]);
            else break;
            current_idx = parent_idx;
        }
    }

    for(int val: v) cout << val << " ";
    return 0;
}


/*
input: 
5 
10 60 40 50 30
*/