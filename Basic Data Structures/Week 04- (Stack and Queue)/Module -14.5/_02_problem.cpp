// #include<bits/stdc++.h>
// using namespace std;
// bool get_com_same(stack &st1, stack &st2){
    
// };
// int main()
// {
//     stack<int> st1;
//     int n; cin >> n;
//     for(int i=0; i<n; i++){
//         int x; cin >> x;
//         st1.push(x);
//     }

//     stack<int> st2;
//     int m; cin >> m;
//     for(int i=0; i<m; i++){
//         int x; cin >> x;
//         st2.push(x);
//     }
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
        vector<int> v;
    void push(int val){
        v.push_back(val);
    }
    void pop(){
       if(!v.empty()){
        v.pop_back();
       }
    }
    int top(){
        if(!v.empty()){
            return v.back();
        }
        return -1;
    }
    bool empty(){
        return v.empty();
    }

    int size(){
        return v.size();
    }
};


bool get_Compare_Stack(stack<int> &st1, queue<int> &st2){
    if(st1.size() != st2.size()){
        return false;
    }
    while (!st1.empty() && !st2.empty())
    {
        if(st1.top() != st2.front()){
            return false;
        }
        st1.pop();
        st2.pop();
    }
    return true;
        
}
int main()
{
    stack<int> st1;
    int n; cin >> n;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        st1.push(x);
    }

    queue<int> st2;
    int m; cin >> m;
    for(int i=0; i<m; i++){
        int x; cin >> x;
        st2.push(x);        
    }
    if(get_Compare_Stack(st1,st2)){
        cout << "YES" <<endl;
    }
    else cout << "NO" <<endl;
    return 0;
}