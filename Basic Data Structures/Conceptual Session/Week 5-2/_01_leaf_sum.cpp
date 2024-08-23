#include<bits/stdc++.h>
using namespace std;
class Node 
{
    public:
        int val;
        Node *left;
        Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* input_tree()
{
    int val; cin >> val;
    Node *root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node* > q;
    if(root) q.push(root);

    while (!q.empty())
    {
        // 1st step; 
        Node* p = q.front();
        q.pop();

        // 2nd step;
        int l, r;
        cin >> l >> r;
        Node* myLeft;
        Node* myRight;
        if(l==-1) myLeft = NULL;
        else myLeft = new Node(l);
        if(r==-1) myRight = NULL;
        else myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        // 3rd step:
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return root; 
}
void level_order(Node* root)
{
    if(root == NULL) {
        cout << "Tree nai" <<endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }  
}
int sum = 0;
void leaf_sum(Node *root) 
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL){
        sum += root->val;
        return; 
    }
    leaf_sum(root->left);
    leaf_sum(root->right);
}
int main()
{
    Node *root = input_tree();
    level_order(root);
    leaf_sum(root);
    cout <<endl << sum << endl;


    return 0;
}


// input : 10 20 60 30 50 70 -1 -1 40 -1 -1 -1 -1 80 -1 -1 -1