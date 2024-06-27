//https://www.hackerrank.com/contests/assignment-02-a-basic-data-structures-a-batch-05/challenges
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
void difference_of_min_max(Node *head)
{
    Node *tmp = head;
    int mn = INT_MAX;
    int mx = INT_MIN;
    while (tmp != NULL)
    {
        if(tmp->val> mx){
            mx = tmp->val;
        }
        if(tmp->val<mn){
            mn = tmp->val;
        }
        tmp = tmp->next;
    }
    int diff = mx - mn;
    cout << diff <<endl;
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
    difference_of_min_max(head);
    return 0;
}