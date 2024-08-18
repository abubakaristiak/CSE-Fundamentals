/*
Question: Take a singly linked list as input and print the middle element. 
If there are multiple values in the middle print both.
*/

#include <bits/stdc++.h>
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
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    int count = 0; 
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    if(count%2==1){
        int mid = count/2;
        tmp = head;
        for(int i=1; i<=mid; i++){
            tmp = tmp->next;
        }
        cout << tmp->val <<endl;
    }
    if(count%2==0){
        int mid = count/2;
        tmp = head;
        for(int i=1; i<mid; i++){
            tmp = tmp->next;
        }
        cout << tmp->val<<" "<<tmp->next->val<<endl;
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    print_linked_list(head);
    return 0;
}