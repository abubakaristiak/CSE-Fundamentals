#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node * &head,int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    
}
void delete_at_any_position(Node *head, int pos, int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    } 
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insert_head(Node * &head, int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    newNode->next = head;
    head = newNode;
}
void printingList(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    
}

int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val==-1) break;
        insert_tail(head,val);
    }
    printingList(head);
    // int pos, v;
    // cin >> pos>> v;
    // delete_at_any_position(head, pos, v);
    int v; 
    cin>> v;
    insert_head(head, v);
    printingList(head);


    return 0;
}