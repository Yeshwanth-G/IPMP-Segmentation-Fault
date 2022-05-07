
    bool isleaf(Node*p){
        return p->left==nullptr&&p->right==nullptr;
    }
    bool isSumTree(Node* root)
    {
        if(root==nullptr)return true;
        if(root->left==nullptr&&root->right==nullptr)return true;
        int x=0;
       if(root->left) x=root->left->data+((isleaf(root->left))?0:root->left->data);
        if(root->right)x+=root->right->data+((isleaf(root->right))?0:root->right->data);
        if(x==root->data)
        return isSumTree(root->left)&&isSumTree(root->right);
        return false;
    }
