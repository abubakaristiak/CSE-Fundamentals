/*Question: Take a singly linked list as input and check if the linked list contains any duplicate value.
You can assume that the maximum value will be 100.
*/
#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node * &head, int val)
{
    Node *newNode = new Node(val);
    Node *temp = head;
    if(head == NULL){
        head = newNode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    
}
// void printList(Node *head){
//     Node *temp = head;
//     while (temp != NULL)
//     {

//         cout << temp->val <<" ";
//         temp = temp->next;
//     }
    
    
// }
int size_of_linked_list(Node *head){
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
    
}
void even_list(Node *head,int n){
    Node *newNode = new Node(n);
    Node *temp = head;
    for(int i=1; i<n; i++){
        cout << temp->val<<endl;
        temp = temp->next;
    }
}
int main()
{
    Node *head = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if(val== -1) break;
        insert_at_tail(head, val);
    }
    int size = size_of_linked_list(head);
    cout <<size <<endl;
    if(size%2==1){
        int n = size/2;
        even_list(head, n);
    }
    
    
    return 0;
}








// brouteforece: 
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int ar[n];
//     for(int i= 0; i<n; i++){
//         cin >> ar[i];
//     }
//     int flag = 0;
//     for(int i=0; i<n-1;i++){
//         for(int j=i+1; j<n; j++){
//             if(ar[i]==ar[j]){
//                 flag = 1;
//                 break;
//             }
//         }
//     }
//     if(flag == 1){
//         cout << "Yes"<<endl;
//     }
//     else {
//         cout << "no"<<endl;
//     }
//     return 0;
// }