#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}


int size_doubly(Node *head){
    Node *tmp = head;
    int count = 0; 
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
}
void print(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val<<" ";
        tmp = tmp->next;
    }
    cout << endl;
    
}
int main()
{


    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    int value_1;
    while (true)
    {
        cin >> value_1; 
        if(value_1 == -1) break;
        insert_tail(head_1, tail_1, value_1);

    }
    print(head_1);

    return 0;
}