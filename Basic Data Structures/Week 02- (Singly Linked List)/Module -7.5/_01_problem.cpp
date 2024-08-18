//https://docs.google.com/document/d/1G6H1s70PF4Faujy6OeGPfrppj-C_wQEn/edit
//Question: Take two singly linked lists as input and check if their sizes are same or not.

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
int count_size(Node *head)
{
    Node *tmp = head;
    int count=0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
int main()
{
    Node *head_1 = NULL;
    Node *tail_1 = NULL;
    Node *head_2 = NULL;
    Node *tail_2 = NULL;
    int val_1,val_2;
    while (true)
    {
        cin >> val_1;
        if (val_1 == -1)
            break;
        insert_tail(head_1, tail_1, val_1);
    }
    while (true)
    {
        cin >> val_2;
        if (val_2 == -1)
            break;
        insert_tail(head_2, tail_2, val_2);
    }
    if(count_size(head_1)==count_size(head_2)){
        cout << "YES"<<endl;
    }
    else cout << "NO" <<endl;
    return 0;
}