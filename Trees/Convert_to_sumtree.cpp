-------------DFS----------------------O(n) 
void toSumTree(Node *node)
    {
        if(node==nullptr)return;
        node->data=node->left==nullptr?0:node->left->data;
        node->data+=node->right==nullptr?0:node->right->data;
        toSumTree(node->left);
        toSumTree(node->right);
        node->data+=node->left==nullptr?0:node->left->data;
        node->data+=node->right==nullptr?0:node->right->data;
    }
