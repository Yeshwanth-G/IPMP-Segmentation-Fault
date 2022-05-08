//delete all nodes outside given range..
//first set left and right and then if root is less than low return right part, if root is more than high return left part else return root;
TreeNode* trimBST(TreeNode* root, int low, int high) {
        if(root==nullptr)return nullptr;
        root->left=trimBST(root->left,low,high);
        root->right=trimBST(root->right,low,high);
        if(root->val<low){
            cout<<root->val<<endl;
            return root->right;
        }
        else if(root->val>high){
            cout<<root->val<<endl;
            return root->left;
        }
        else return root;   
    }
