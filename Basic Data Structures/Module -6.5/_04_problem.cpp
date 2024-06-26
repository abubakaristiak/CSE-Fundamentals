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
void insert_at_tail(Node * &head, int v)
{
    Node *newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next= newNode;
    
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }
    cout <<endl;
     
}
void insert_head(Node * &head,int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void insert_at_position(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *tmp = head;

    for(int i=1; i<=pos-1; i++){
        tmp = tmp->next;
        if(tmp == NULL){
            cout << "Invaild"<<endl;
            return;
        }
    }
    newNode->next=tmp->next;
    tmp->next=newNode;
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int v;
        cin >> v;
        if(v==-1) break;
        insert_at_tail(head,v);
    }    
    int q;
    cin >> q; 
    while (q--)
    {
        int pos,val;
        cin>> pos>> val;
        if(pos==0){
            insert_head(head, val);
            print_linked_list(head);
        }
        else{
            insert_at_position(head, pos, val);
            print_linked_list(head);
        }
    }
    return 0;
}