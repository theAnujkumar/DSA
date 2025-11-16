void inOrder(TreeNode<int>* root, vector<int> &in)
{
    // base case
    if(root == NULL)
    return ;

    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);

}

TreeNode<int>* inOrderToBst(int s , int e , vector<int> &inOrderVal)
{
    if(s>e)
    {
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int> * root = new TreeNode<int> (inOrderVal[mid]);

    root->left = inOrderToBst(s,mid-1,inOrderVal);
    root->right= inOrderToBst(mid+1,e,inOrderVal);
    return root;
}

TreeNode<int>* balancedBst(TreeNode<int>* root) {
    
    vector<int> inOrderVal;

    // store inorder in sorted ways
    inOrder(root,inOrderVal);

    return inOrderToBst(0,inOrderVal.size()-1,inOrderVal);

}
// O(N)