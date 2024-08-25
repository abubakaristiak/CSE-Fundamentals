// TODO: https://www.hackerrank.com/contests/assignment-04-a-basic-data-structure-a-batch-05/challenges
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
int sum = 0;
void sumWithoutLeaf(Node* root)
{
    if(root == NULL) return;
    if(root->left == NULL && root->right == NULL) return;

    sum +=root->val; 

    sumWithoutLeaf(root->left);
    sumWithoutLeaf(root->right);
    
}
int main()
{
    Node *root = input_tree();
    sumWithoutLeaf(root);
    cout<<sum<<endl;
    return 0;
}