// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node * next;
//     Node(int val){
//         this->val = val;
//         this->next = NULL;
//     }
// };
// int main()
// {
//     // static node
//     // Node a,b;
//     // a.val = 10;
//     // b.val = 20;
//     // a.next = &b;

//     // dynamic node
//     Node *a = new Node(10);
//     Node *b = new Node(20);
//     a->next = b;

//     cout << (*a).val <<endl;     // dereference 
//     cout << a->val<<endl;
//     return 0;
// }



// print node
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
void print_linked_list(Node *head){
    
    Node *tmp = head;
    while (tmp != NULL)     // O(N)
    {
        cout<<tmp->val << " ";
        tmp = tmp->next;
    }
    
}
void insert(Node *head, int pos, int val){
    Node * newNode = new Node(val);
    Node * tmp = head;
    for(int i=1; i<=pos-1; i++){        // O(N)
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
}
int size(Node *head){
    Node * tmp = head;
    int count = 0;
    while (tmp != NULL)     // O(N)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
    
}
int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * d = new Node(50);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    print_linked_list(head);
    cout << endl;
    int pos, val;
    cin >> pos>> val;
    if(pos>size(head)){
        cout << "Invaild index"<<endl;
    }
    else{
        insert(head, pos, val);
    }
    print_linked_list(head);
    return 0;
}