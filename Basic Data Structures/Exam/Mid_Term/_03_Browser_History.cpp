#include<bits/stdc++.h>
using namespace std;
class brower_history{
    public:
        list<string> adrs;
        list<string>:: iterator cur;

        void append(string &val){
            adrs.push_back(val);
        }

        void web_visit(const string &val){
            auto it = find(adrs.begin(), adrs.end(), val);
            if(it != adrs.end()){
                cur = it;
                cout << *cur <<endl;
            }
            else cout << "Not Available"<<endl;
        }

        
        void forword(){
            if(cur != adrs.end() && next(cur) != adrs.end()){
                ++cur;
                cout << *cur <<endl;
            }
            else cout << "Not Available"<<endl;
        }

        void backword(){
            if(cur != adrs.begin()){
                --cur;
                cout << *cur <<endl;
            }
            else cout << "Not Available"<<endl;
        }
};
int main()
{
    brower_history bh;
    string adrs;
    while (true)
    {
        cin >> adrs;
        if(adrs == "end") break;
        bh.append(adrs);
    }
    int test; cin >> test;
    string command, web_search;
    while (test--)
    {
        cin >> command;
        if(command == "visit"){
            cin >> web_search;
            bh.web_visit(web_search);
        }
        else if(command == "next"){
            bh.forword();
        }
        else if(command == "prev"){
            bh.backword();
        }
    }
    
    
    
    return 0;
}