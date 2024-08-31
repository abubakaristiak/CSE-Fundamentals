//https://www.hackerrank.com/contests/final-exam-a-basic-data-structure-a-batch-05/challenges
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test; cin >> test;
    while(test--){
        int n; cin >> n;
        set<int> s;
        for(int i=0; i<n; i++){
            int x; cin>> x;
            s.insert(x);
        }
        for(auto it = s.begin(); it != s.end(); it++){
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}