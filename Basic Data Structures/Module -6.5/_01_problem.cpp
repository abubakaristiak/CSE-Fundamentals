//https://docs.google.com/document/d/1ovRSbUm8-9-RjEe2IPn1t82RcMuPFcRv/edit
//Question: Take a singly linked list as input and print the size of the linked list.

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
void insert_at_tail(Node * &head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if(head == NULL){
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}
void printList(Node *head){
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {

        cout << temp->val <<" ";
        count++;
        temp = temp->next;
    }
    // cout<< endl<< "Size of Linked list: "<<count <<endl;
    
}
int size_of_linked_list(Node *head){
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val== -1) break;
        insert_at_tail(head, val);
    }
    printList(head);
    int size = size_of_linked_list(head);
    cout << endl <<"Size of Linked list: "<<size <<endl;
    return 0;
}