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
        this->next = NULL;
    }
};
void insertTail(Node *&head, int val)
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
void insertHead(Node *&head, int val)
{
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insertAnyPos(Node *head, int pos, int val){
    Node *newNode = new Node(val);
    Node *tmp = head;
    for(int i=1; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
void printingList(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}
int main()
{
    Node *head = NULL;
    int val; 
    cout << "Enter value for insert tail: "<<endl;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insertTail(head, val);
    }
    cout << "Inserted at tail -> ";
    printingList(head);
    cout << endl;

    cout << "Enter value for insert head: "<<endl;
    cin >> val;
    insertHead(head, val);
    cout << "Inserted head -> ";
    printingList(head);

    cout << endl << "Enter value for insert any position: "<<endl;
    int val2, pos;
    cin >> pos >> val2;
    insertAnyPos(head, pos, val2);
    cout << "Inserted any position -> ";
    printingList(head);
    
    return 0;
}