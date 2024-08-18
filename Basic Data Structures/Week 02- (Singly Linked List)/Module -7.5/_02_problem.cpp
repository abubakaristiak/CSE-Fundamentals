//Question: Take a singly linked list as input and print the reverse of the linked list.

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
// void reverse_linked_list(Node *head)
// {
//     Node *tmp = head;
//     vector<int>v;
//     while (tmp != NULL)
//     {
//         v.push_back(tmp->val);
//         tmp = tmp->next;
//     }
//     reverse(v.begin(),v.end());
//     for(int val:v)
//     {
//         cout << val<<" ";
//     }
// }


// different approach recursively
void reverse_linked_list(Node *n)
{
    if(n == NULL) return;
    reverse_linked_list(n->next);
    cout << n->val<<" ";
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
    reverse_linked_list(head);
    return 0;
}