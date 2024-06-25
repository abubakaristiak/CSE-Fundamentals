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
void insert_at_tail(Node * &head, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}
void printingList(Node *head){
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    
}
void insertAtPosition(Node *head,int pos, int v){
    Node *newNode = new Node(v);
    Node *tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void insertAthead(Node * &head, int a){
    Node * newNode = new Node(a);
    newNode->next = head;
    head = newNode;
}
int main()
{
    Node * head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val ==-1) break;
        insert_at_tail(head, val);
    }
    printingList(head);
    int pos, v;
    cin >> pos >> v;
    insertAtPosition(head, pos, v);
    printingList(head);
    int a; 
    cin >> a;
    insertAthead(head, a);
    printingList(head);

    return 0;
}