/*
Question: Take a singly linked list as input and check if the linked list contains any duplicate value.
You can assume that the maximum value will be 100.
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
    int flag = 0;
    int fre[100] = {0};
    while (temp != NULL)
    {
        int val = temp->val;
        fre[val]++;
        temp = temp->next;
    }
    while (temp != NULL)
    {
        if(fre[temp->val]>1){
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if(flag == 1) cout << "YES"<<endl;
    else cout << "NO"<<endl;
        
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
