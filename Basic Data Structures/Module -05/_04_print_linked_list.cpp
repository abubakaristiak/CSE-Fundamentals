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
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    // ai kaj ta loop ar throw te korle onek better 
    // cout << head->val<<endl;
    // cout <<head->next->val<<endl;
    // cout << head->next->next->val<<endl;
    // cout << head->next->next->next->next->val<<endl;
    
    Node* temp = head;
    while (temp != NULL)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    
    
    return 0;
}