//https://docs.google.com/document/d/1KQNGjcsZdNH7fPaMUGE3z1b110BghmBW1zhMEt0krLU/edit
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

    if(head==NULL){
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
void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val<<" ";
        temp = temp->next;
    }
    cout << endl;
    
}
int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin >> val;
        if(val == -1) break;
        insert_at_tail(head,val);

    }
    print_linked_list(head);
    
    return 0;
}