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
void search_element(Node *head, int x)
{
    Node *tmp = head;
    Node *newNode = new Node(x);
    int idx = 0;
    while (tmp != NULL)
    {
        if(tmp->val==x){
            cout << idx <<endl;
            return;
        }
        tmp = tmp->next;
        idx++;
    }
    cout << -1 <<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int test;
    cin >> test;
    while (test--)
    {
        head = NULL;
        tail = NULL;
        while (true)
        {
            cin >> val;
            if (val == -1)
                break;
            insert_tail(head, tail, val);
        }
        int x; cin>> x;

        search_element(head,x);
    }
    
    return 0;
}