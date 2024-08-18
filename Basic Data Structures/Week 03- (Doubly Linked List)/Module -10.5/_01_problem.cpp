//https://docs.google.com/document/d/1u1jX1RarxgYH3xGsSCKZGOi4qFkE9QSH/edit
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

void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
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
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }
    cout << endl;
    
}

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
bool check(Node *head_1, Node *head_2){
    Node *tmp_1 = head_1;
    Node *tmp_2 = head_2;
    if(size_doubly(head_1) != size_doubly(head_2)){
        return false;
    }
    while (tmp_1 != NULL && tmp_2 != NULL)
    {
        if(tmp_1->val != tmp_2->val){
            return false;
        }
        tmp_1 = tmp_1->next;
        tmp_2 = tmp_2->next;
    }
    return true;
    
}
int main()
{


    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int value_1;
    while (true)
    {
        cin >> value_1; 
        if(value_1 == -1) break;
        insert_tail(head_1, tail_1, value_1);

    }
    int value_2;
    while (true)
    {
        cin >> value_2; 
        if(value_2 == -1) break;
        insert_tail(head_2, tail_2, value_2);

    }
    if(check(head_1,head_2)){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
    return 0;
}