// TODO: https://www.codingninjas.com/studio/problems/reverse-level-order-traversal_764339
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
#include<bits/stdc++.h>
vector<int> reverseLevelOrder(TreeNode<int> *root){
    // Write your code here.
    queue<TreeNode<int> *> q;
    if(root) q.push(root);
    vector<int> v;
    while(!q.empty())
    {
        TreeNode<int> * f = q.front();
        q.pop();
        v.push_back(f->val);
        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    reverse(v.begin(), v.end());
    return v;
}
*/