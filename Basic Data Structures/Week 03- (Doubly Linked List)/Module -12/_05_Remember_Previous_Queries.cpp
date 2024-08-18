#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; cin >> q;
    list<int> AmerList;
    while (q--)
    {
        int pos, val; cin >> pos >> val;
        if(pos==0){
            AmerList.push_front(val);
        }
        else if(pos == 1){
            AmerList.push_back(val);
        }
        else if(pos==2){
            if(val >= AmerList.size()){

            }
            else{
                AmerList.erase(next(AmerList.begin(),val));
            }
        }
        cout << "L -> ";
        for(int val: AmerList){
            cout <<val <<" "; 
        }
        list<int> TumerList = AmerList;
        reverse(TumerList.begin(), TumerList.end());
        cout << endl<< "R -> ";
        for(int val: TumerList){
            cout << val <<" ";
        };
        cout << endl;
    }

    
    
    return 0;
}


