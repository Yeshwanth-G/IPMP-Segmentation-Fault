//O(n)--O(1)
TreeNode* predecessor(TreeNode*root){
        TreeNode*p=root->left;
        while(p->right&&p->right!=root)p=p->right;
        return p;
    }
    vector<int> inorderTraversal(TreeNode* root) {
       TreeNode*cur=root;
        vector<int>v;
        while(cur!=nullptr){
            if(cur->left==nullptr){
                v.push_back(cur->val);
                cur=cur->right;
            }
            else{
                TreeNode*p=predecessor(cur);
                if(p->right==nullptr){
                    p->right=cur;
                    cur=cur->left;
                }
                else{
                    p->right=nullptr;
                    v.push_back(cur->val);
                    cur=cur->right;
                }
            }
        }
        return v;
    }
