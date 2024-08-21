//TODO: https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055
/*
int noOfLeafNodes(BinaryTreeNode<int> *root){
    // Write your code here.
    if(root == NULL) return 0;
    if(root->left==NULL && root->right==NULL) return 1;
    else{
        int l=noOfLeafNodes(root->left);
        int r=noOfLeafNodes(root->right);
        return l+r;
    }
}
*/