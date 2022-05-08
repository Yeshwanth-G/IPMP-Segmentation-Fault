-------------------------DFS---------------O(n)
    int isSumProperty(Node *root)
    {
        if(root==nullptr)return true;
        if(root->left==nullptr&&root->right==nullptr)return true;
        int x=0;
        x+=root->left==nullptr?0:root->left->data;
        x+=root->right==nullptr?0:root->right->data;
        if(x!=root->data)return false;
        
        return isSumProperty(root->left)&&isSumProperty(root->right);
    }
