#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
        int val;
        Node *left;
        Node *right;

        Node(int val){
            this->val = val;
            this->left = NULL;
            this->right = NULL;
        }
};
void preOrder(Node *root){
    if(root==NULL) return;
    cout << root->val <<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root){
    if(root == NULL) return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->val <<" ";
}

void inOrder(Node *root){
    if(root == NULL) return;
    inOrder(root->left);
    cout << root->val<<" ";
    inOrder(root->right);
}
int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);

    a->left = b;
    a->right = c;

    b->left = d;
    c->right = e;

    preOrder(a);
    cout << endl;
    postOrder(a);
    cout << endl;
    inOrder(a);
    return 0;
}

