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
Node *convert(int ar[], int n, int l, int r)
{
    if(l > r){
        return NULL;
    }
    int mid = (l+r)/2;
    Node *root = new Node(ar[mid]);
    Node* leftRoot = convert(ar, n, l, mid-1);
    Node* rightRoot = convert(ar, n, mid+1, r);
    root->left = leftRoot;
    root->right = rightRoot;
    return root;

}
int main()
{
    int n; cin >> n;
    int ar[n]; 
    for(int i=0; i<n; i++){
        cin >> ar[i];
    }

    Node* root = convert(ar, n, 0, n-1);
    level_order(root);
    return 0;
}