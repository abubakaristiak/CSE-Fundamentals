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
    Node *newNode = new Node(x);
    Node *tmp = head;
    int flag=0;
    while (tmp != NULL)
    {
        if(tmp->val==x){
            flag =1;
            break;
        }
        tmp = tmp->next;
    }
    if(flag==1){
        cout << "YES"<<endl;
    }
    else{
        cout << "NO"<<endl;
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
    int x;
    cin >> x;
    search_element(head, x);
    return 0;
}

// Linear Search -> O(N)
// Sort -> O(NlogN)
// Binary Search -> O(logN)
// ---------------------------
//              -> O(NlogN) + O(logN)  =  O(NlogN)
// in this problem linear search is better than binary search.