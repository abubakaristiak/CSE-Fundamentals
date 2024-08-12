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
void delete_at_position(Node *head, int pos)
{
    Node *tmp = head;
    for(int i=1; i<pos-1; i++)
    {
        tmp = tmp->next;
    }
    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}
void deleteHead(Node *&head)
{
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

}
void printingList(Node *head){
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
    cout << "Enter value: " <<endl;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insertTail(head, val);

    }
    printingList(head);
    cout << endl;
    cout << "Enter position for delete element with any position: " <<endl;
    int pos; cin >> pos;
    cout << "After delete any position -> ";
    delete_at_position(head, pos);
    printingList(head);
    cout << endl;
    cout << "After delete head-> ";
    deleteHead(head);
    printingList(head);

    
    return 0;
}