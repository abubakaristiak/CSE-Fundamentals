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
            if(v[parent_idx] < v[current_idx]) swap(v[parent_idx],v[current_idx]);
            else break;
            current_idx = parent_idx;
        }
    }

    for(int val: v) cout << val << " ";
    return 0;
}



/*
input: 
11
50 45 40 30 35 42 32 25 20 10 55
*/







// another approuch:
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {50, 45, 40, 30, 35, 42, 32, 25, 20, 10};
    int x; cin >> x;
    v.push_back(x);

    int current_idx = v.size()-1;
    while (current_idx != 0)
    {
        int parent_idx = (current_idx-1)/2;
        if(v[parent_idx] < v[current_idx]) swap(v[parent_idx],v[current_idx]);
        else break;
        current_idx = parent_idx;
    }
    for(int val: v) cout << val << " ";
    return 0;
}
*/