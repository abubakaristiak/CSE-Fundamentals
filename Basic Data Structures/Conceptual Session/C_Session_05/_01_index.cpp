#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node* prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
// to calculate linked list size;
int sz= 0;
void insertAtTail(Node *&head, int val){
    sz++;
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
    newNode->prev = tmp;
    
    
}
void printList(Node *head){
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
    
}

// O(N);
void countList(Node *head){
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    cout << cnt << endl;   
}

// O(1);
void countListOne(Node *head){
    // int cnt = 0;
    // while (head != NULL)
    // {
    //     cnt++;
    //     head = head->next;
    // }
    cout << sz << endl;
    
}
int main()
{
    Node *head = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if (val==-1) break;
        insertAtTail(head, val);
    }
    
    printList(head);
    countListOne(head);
    return 0;
}