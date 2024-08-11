#include<bits/stdc++.h>
using namespace std;
class Node 
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = next;
    }
};
void printList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp=tmp->next;
    }
    
}
void insert_tail(Node *head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        newNode = head;
        return;
    }
    head->next = newNode;
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insert_tail(head, val);
    }
    
    printList(head);
    return 0;
}