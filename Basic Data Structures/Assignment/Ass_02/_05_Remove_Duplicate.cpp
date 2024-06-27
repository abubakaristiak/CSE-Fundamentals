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
// in this case for show error b
// void erase_twice_element(Node * &head)
// {
//     for(Node *i=head; i != NULL; i= i->next){
//         Node *joma_raklam = i;
//         for(Node *j = i->next; j != NULL;){
//             if(i->val==j->val){
//                 Node *deleteNode = j;
//                 joma_raklam->next = j->next;
//                 j = j->next;
//                 delete deleteNode;
//             }
//             else{
//                 joma_raklam = j;
//                 j = j->next;
//             }
//         }
//     }
//     cout << endl;
// }
void erase_twice_element(Node * &head)
{
    Node *tmp_1 = head;
    while (tmp_1 != NULL)
    {
        Node *tmp_2 = tmp_1;
        while (tmp_2->next != NULL)
        {
            if(tmp_2->next->val == tmp_1->val){
                Node *deleteNode = tmp_2->next;
                tmp_2->next = tmp_2->next->next;
                delete deleteNode;
            }
            else{
                tmp_2 = tmp_2->next;
            }
        }
        tmp_1= tmp_1->next;
    }
    
}
void print_linked_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
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
    erase_twice_element(head);
    print_linked_list(head);
    return 0;
}




