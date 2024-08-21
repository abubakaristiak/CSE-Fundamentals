//TODO: https://www.codingninjas.com/studio/problems/level-order-traversal_796002
/*
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    vector<int> v;
    if(root == NULL) return v;
    
    queue<BinaryTreeNode<int>*> q;
    q.push(root);

    while(!q.empty())
    {
        BinaryTreeNode<int> *f = q.front();
        q.pop();

        v.push_back(f->val);

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
    
    return v;

}
*/