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

int maxHeight(Node *root){
    if(root==NULL) return 0;
    int l = maxHeight(root->left);
    int r = maxHeight(root->right);
    return max(l, r) + 1;
}


void levelNode(Node* root, int x, int level)
{
    if(root == NULL) return;
    if(x == level) cout << root->val << " ";
    levelNode(root->left, x+1, level);
    levelNode(root->right, x+1, level);
}


int main()
{
    Node* root = input_tree();
    int level; cin >> level;
    
    if(maxHeight(root)>level)
        levelNode(root, 0, level);
    else cout << "Invalid" << endl;
    return 0;
}
