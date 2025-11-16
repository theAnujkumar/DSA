void inOrder(TreeNode<int>* root, vector<int> &in)
{
    // base case
    if(root == NULL)
    return ;

    inOrder(root->left,in);
    in.push_back(root->data);
    inOrder(root->right,in);

}

vector<int> mergeArrays(vector<int> &a , vector<int> &b)
{
    vector<int> ans(a.size() + b.size());

    int i=0 , j=0;
    int k=0;

    while(i<a.size() && j<b.size())
    {
        if(a[i] < b[j])
        {
            ans[k++] = a[i];
            i++;
        }
        else{
            ans[k++] = b[j];
            j++;
        }
    }
    while(i < a.size())
    {
        ans[k++] = a[i];
        i++;
    }
    while(j < b.size())
    {
        ans[k++] = b[j];
        j++;
    }
    return ans;

}

TreeNode <int>* inOrderToBst(int s , int e , vector<int> &inOrderVal)
{
    if(s>e)
    {
        return NULL;
    }

    int mid = (s+e)/2;
    TreeNode<int> *root = new TreeNode<int>(inOrderVal[mid]);

    root->left = inOrderToBst(s,mid-1,inOrderVal);
    root->right= inOrderToBst(mid+1,e,inOrderVal);
    return root;
}


vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    // store inorder in sorted ways
    vector<int> bst1 , bst2;
    inOrder(root,bst1);
    inOrder(root,bst2);

    // merge both sorted array
    vector<int> mergeArray = mergeArrays(bst1,bst2);

    // use merge inorder array to build bst
    int s=0 , e = mergeArray.size()-1;
    return inOrderToBst(s,e,mergeArray);

    // tc and sc = O(N+M)

}


// 2nd
void convertedIntoSortedLL(TreeNode *root , TreeNode * &head)
{
    if(root == NULL)
    {
        return ;
    }

    convertedIntoSortedLL(root->right , head);

    root->right = head;
    while(head != NULL)
    {
        head->left = root;
    }
    head = root;

    convertedIntoSortedLL(root->left , head);

// sc = O(H)
}

vector<int> mergeLinkedlist(TreeNode *head1, TreeNode *head2)
{
    TreeNode *head = NULL;
    TreeNode *tail = NULL;

    while(head1 != NULL && head2 != NULL)
    {
        if(head1->data < head2->data)
        {
            if(head == NULL)
            {
                head = head1;
                tail = head1;
                head1 = head1->right;
            }
            else{
                tail -> right = head1;
                head1 -> left = tail;
                tail = head1;
                head1 = head1->right;
            }
        }

        else{
            if(head == NULL)
            {
                head = head2;
                tail = head2;
                head2 = head2->right;
            }
            else{
                tail -> right = head2;
                head2 -> left = tail;
                tail = head2;
                head2 = head2->right;
            }
        }
    }

    while (head1 != NULL)
    {
        tail -> right = head1;
        head1 -> left = tail;
        tail = head1;
        head1 = head1->right;
    }

    while(head2 != NULL)
    {
        tail -> right = head2;
        head2 -> left = tail;
        tail = head2;
        head2 = head2->right;
    }
}
// tc = O(N+M)
// sc = O(1)

int countNode(TreeNode *head)
{
    int cnt = 0;
    TreeNode *temp = head;
    while(temp != NULL)
    {
        cnt++;
        temp = temp->right;
    }
    return cnt;
}

vector<int> sortedLLToBst(TreeNode * &head , int n)
{
    // base case
    if(n<=0 || head == NULL)
    {
        return NULL;
    }

    TreeNode *left = sortedLLToBst(head,n/2);

    TreeNode *root = head;
    root->left = left;
    head = head->next;

    root->right = sortedLLToBst(head , n-(n\2)-1);
    return root;
}
// tc = O(N+M)
// sc = O(h1+h2)

vector<int> mergeBST(TreeNode *root1, TreeNode *root2)
{
    
    // step 1 convert bst to sorted linked list inplace
    TreeNode *head1 = NULL;
    convertedIntoSortedLL(root1,head1);
    head1 -> left = NULL;

    TreeNode *head2 = NULL;
    convertedIntoSortedLL(root2,head2);
    head1 -> left = NULL;

    // step 2 merge linked list
    TreeNode *head = mergeLinkedlist(head1,head2);

    // step 3 
    return sortedLLToBst(head,countNode(head));
}