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
void print_normal(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
    
}
void print_reverse(Node *tail){
    Node *tmp = tail;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->prev;
    }
    cout << endl;
    
}
void insert_at_position(Node *head, int pos, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
    
}
int size(Node *head){
    int count = 0;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
}
void insert_head(Node * &head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val){
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
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* tail = c;
    // connection
    head->next=a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    int pos, val;
    cin >> pos >> val;
    if(pos==0){
        insert_head(head, val);
    }
    else if(pos == size(head)){
        insert_tail(head, tail, val);
    }
    else if(pos>=size(head)){
        cout <<"Invaild "<<endl;
    }
    else{
        insert_at_position(head, pos, val);
    }
    
    print_normal(head); 
    print_reverse(tail);
    return 0;
}