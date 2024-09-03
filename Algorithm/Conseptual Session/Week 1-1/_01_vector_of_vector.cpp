#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> ar1;

    ar1.push_back(vector<int>({1,2,3}));   // row borabor kaj kore
    ar1.push_back(vector<int>({4,5,6}));

    ar1[0].push_back(4);    // row element increase.

    cout << ar1.size() << endl;     // row numbers
    cout << ar1[0].size() << endl;  // specific row number element count;

    for(int i=0; i<ar1.size(); i++){
        for(int j=0; j<ar1[i].size(); j++){
            cout << ar1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}