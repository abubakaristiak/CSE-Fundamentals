#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
class myStack{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz=0;
        void push(int val){
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
        void pop(){
            if(sz==0) return;
            sz--;
            Node *deleteNode = tail;
            tail = tail->prev;
            if(tail==NULL){
                head = NULL;
            }
            else tail->next = NULL;
            delete deleteNode;
        }
        int top(){
            if(tail != NULL){
                return tail->val;
            }
            return -1;
        }
        bool empty(){
            if(sz==0) return true;
            else return false;
        }
        int size(){
            return sz;
        }

};

class myQueue{
    public:
        Node *head = NULL;
        Node *tail = NULL;
        int sz=0;
        void push(int val){
            sz++;
            Node *newNode = new Node(val);
            if(head == NULL){
                head = newNode;
                tail = newNode;
                return;
            }
            tail->next = newNode;
            newNode->prev = tail;
            tail = tail->next;
        }
        void pop(){
            if(sz==0) return;
            sz--;
            Node *deleteNode = head;
            if(head == NULL){
                tail = NULL;
                return;
            }
            head = head->next;
            if(head == NULL){
                tail = NULL;
            }
            else head->prev = NULL;
            delete deleteNode;
        }
        int front(){
            if(head != NULL){
                return head->val;
            }
            return -1;
        }
        bool empty(){
            if(sz==0) return true;
            else return false;
        }
        int size(){
            return sz;
        }

};
int main()
{
    myStack st;
    myQueue q;
    int n, m; cin >> n >> m;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        st.push(x);
    }

    for(int i=0; i<m; i++){
        int x; cin >> x;
        q.push(x);
    }
    bool flag = true;
    while (!st.empty() && !q.empty())
    {
        if(st.size() != q.size()){
            flag = false;
            break;
        }
        if(st.top() != q.front()){
            flag = false;
            break;
        }
        st.pop();
        q.pop();
        
    }
    if(flag==true) cout << "YES";
    else cout << "NO";
    
    return 0;
}