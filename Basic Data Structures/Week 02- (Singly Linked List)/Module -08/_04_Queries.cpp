//https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-05/challenges
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
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
void insert_head(Node * &head, int val){
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void size_of_list(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count ++;
        tmp = tmp->next;
    }
}
void delete_position(Node * &head, int val){
    Node * tmp = head;
    if(val<0 || head == NULL){
        return;
    }
    if(val == 0){
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }
    for(int i=0; i<val-1; i++){
        if(tmp->next == NULL){
            return;
        }
        tmp = tmp->next;
    }
    Node *deletenode = tmp->next;
    if(deletenode==NULL){
        return;
    }
    tmp->next = tmp->next->next;
    delete deletenode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int test;cin>>test;
    while (test--)
    {
        
        int x, val;
        cin >> x >> val;
        if(x==0){
            insert_head(head, val);
            print_linked_list(head);
        }
        if(x==1){
            insert_at_tail(head,val);
            print_linked_list(head);
        }
        if(x==2){
            delete_position(head,val);
            print_linked_list(head);
        }
    }
    return 0;
}