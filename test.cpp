#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }

};
void insert_tail(Node *&head, Node *&tail, int val){
    Node *newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;

}
void printList(Node *head){
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val <<" ";
        tmp = tmp->next;
    }
    cout << endl;
    
}
// void check_duplicate(Node *head){
//     Node *tmp = head;
//     Node *tmp2 = head->next;
//     while (tmp != NULL)
//     {
//         while (tmp2 != NULL)
//         {
//             if(tmp->next->val == tmp2->next->val){
//                 tmp = tmp->next->next;
//             }
//             tmp2 = tmp2->next;
//         }
//         tmp = tmp->next;
        
//     }
    
// };
void check_duplicate(Node *head){
    if(head == NULL) return;
    Node *tmp = head;
    while (tmp != NULL && tmp != NULL)
    {
        Node *tmp2 = tmp;
        while (tmp2->next != NULL)
        {
            if(tmp->val == tmp2->next->val){
                Node *duplicate = tmp2->next;
                tmp->next = tmp->next->next;
                delete duplicate;
            }
            else{
                tmp2 = tmp2->next;
            }
            
        }
        while (head != NULL && head->next != NULL && head->val == head->next->val)
        {
            Node *duplicate = head;
            head = head->next;
            delete duplicate;
        }
        
        tmp = tmp->next;
        
    }
    
};
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val == -1){
            break;
        }
        insert_tail(head, tail, val);
    }
    check_duplicate(head);
    printList(head);
    
    

    return 0;
}