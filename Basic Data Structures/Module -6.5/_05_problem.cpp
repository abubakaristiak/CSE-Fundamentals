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
// void check_sort(Node *head)
// {
//     Node *tmp = head;
//     int flag = 0;
//     for(Node *i= head; i->next != NULL; i=i->next){
//         for(Node *j=i->next; j !=NULL; j=j->next){
//             if(i->val>j->val){
//                 flag=1;
//                 break;
//             }
//         }
//     }
//     if(flag==1){
//         cout << "NO"<<endl;
//     }
//     else cout << "YES"<<endl;
// }

// Another way better approach
void check_sort(Node *head)
{
    Node *tmp = head;
    int flag = 0;
    while (tmp->next != NULL)
    {
        if(tmp->val>tmp->next->val){
            flag=1;
            break;
        }
        tmp = tmp->next;
    }
    
    if(flag==1){
        cout << "NO"<<endl;
    }
    else cout << "YES"<<endl;
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
    check_sort(head);
    return 0;
}