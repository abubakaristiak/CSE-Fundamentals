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

int size_doubly(Node *head){
    Node *tmp = head;
    int count = 0; 
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
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

void insert_head(Node * &head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_tail(Node *& head, Node * &tail, int val){
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

void print(Node *head){
    Node *tmp = head;
    cout << "L -> ";
    while (tmp != NULL)
    {
        cout<< tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
    
}

void print_reverse(Node *tail){
    Node *tmp = tail;
    cout << "R -> ";
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->prev;
    }
    cout << endl;
    
}
int main()
{


    Node *head = NULL;
    Node *tail = NULL;
    int q; cin >> q;
    while (q--)
    {
        int pos,val; cin >> pos>>val;
        if(pos > size_doubly(head)){
            cout << "Invalid"<<endl;
        }
        else if(pos==0){
            insert_head(head,tail, val);
            print(head);
            print_reverse(tail);
        }
        else if(pos == size_doubly(head)){
            insert_tail(head, tail, val);
            print(head);
            print_reverse(tail);
        }
        else{
            insert_at_position(head, pos, val);
            print(head);
            print_reverse(tail);
        }
    }
    


    return 0;
}