// #include<bits/stdc++.h>
// using namespace std;
// class Node
// {
//     public:
//         int val;
//         Node* next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// void print_recursion(Node *n){
//     if(n==NULL) return;
//     print_recursion(n->next);
//     cout << n->val <<" ";
// }
// void reverse(Node *&head, Node *run){
//     if(run->next == NULL){
//         head = run;
//         return;
//     }
//     reverse(head, run->next);
//     run->next->next=run;
//     run->next = NULL;
// }
// void print(Node *head){
//     Node *tmp = head;
//     while (tmp != NULL)
//     {
//         cout<<tmp->val << " ";
//         tmp = tmp->next;
//     }
//     cout << endl;
    
// }
// int main()
// {
//     Node *head = new Node(10);
//     Node *a = new Node(20);
//     Node *b = new Node(30);

//     head->next = a;
//     a->next = b;
//     // print_recursion(head);
//     print(head);
//     reverse(head, head);
//     print(head);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;
    int b; cin>> b;
    a.push_back(b);     
    return 0;
}