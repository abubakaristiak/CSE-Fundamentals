/*
Question: Take a singly linked list as input and print the middle element.
If there are multiple values in the middle print both.
*/
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
        count++;
        temp = temp->next;
    }
    if(count%2==1){
        int mid = count/2;
        for(int i=1; i<=mid; i++){
            temp = temp->next;
        }
        cout<<temp->val<<" ";
    }
    else if(count%2==0){
        int mid = count/2;
        for(int i=1; i<mid; i++){
            temp = temp->next;
        }
        cout << temp->val <<" "<<temp->next->val<<endl;

    }   
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
    return 0;
}