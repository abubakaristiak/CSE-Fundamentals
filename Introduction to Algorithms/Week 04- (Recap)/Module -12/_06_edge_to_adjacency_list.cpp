#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<pair<int,int>> v[n];
    while (e--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        v[a].push_back({b,c});
    }


    for(int i=0; i<n; i++){
        cout << i << "-> ";
        for(pair<int,int> child : v[i]){
            cout << "{"<<child.first << " " << child.second << "} ";
        }
        cout << endl;
    }
    
    
    return 0;
}


/*
input:
4 5
0 1 10 
1 2 11
2 3 12
3 2 12
3 1 13
*/