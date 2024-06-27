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
void delete_at_any_position(Node *head, int pos){
    Node *tmp = head;
    for(int i=1; i<pos-1; i++){
        tmp = tmp->next;
    } 
    Node * deletenode = tmp->next;
    tmp->next= tmp->next->next;
    delete deletenode; 
}
void delete_head(Node * &head){
    Node *deletenode = head;
    head = head->next;
    delete deletenode;
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
    int pos;
    cin >> pos;
    if(pos==0){
        delete_head(head);
    }
    else{

    delete_at_any_position(head, pos);
    }
    printingList(head);
    


    return 0;
}