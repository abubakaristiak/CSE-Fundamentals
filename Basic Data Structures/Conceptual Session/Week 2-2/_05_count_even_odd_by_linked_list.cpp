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
void count_even_odd(Node *head)
{
    Node *tmp = head;
    int even_count=0;
    int odd_count = 0; 
    while (tmp != NULL)
    {
        if(tmp->val%2==0){
            even_count++;
        }
        if(tmp->val%2==1){
            odd_count++;
        }
        tmp = tmp->next;
    }
    cout << even_count<<" "<<odd_count;
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
    count_even_odd(head);
    return 0;
}