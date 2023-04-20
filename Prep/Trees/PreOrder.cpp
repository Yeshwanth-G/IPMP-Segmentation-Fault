 vector<int> preorderTraversal(TreeNode* root) {
        TreeNode*cur=root;
        vector<int>ans;
        while(cur){
            TreeNode*p=cur->left;
            if(!p){
                ans.push_back(cur->val);
                cur=cur->right;
                continue;
            }
            while(p->right!=nullptr&&p->right!=cur){
                p=p->right;
            }
            if(p->right==nullptr){
                ans.push_back(cur->val);
                p->right=cur;
                cur=cur->left;
            }else{
                p->right=nullptr;
                cur=cur->right;
            }
        }
        return ans;
    }
//print when first time visited
//in inorder we print when second time visited....
------------------------------------
  //iterative...
  vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*>stk;
        stk.push(root);
        vector<int>ans;
        while(stk.empty()==false){
            TreeNode*p=stk.top();
            stk.pop();
            if(p==nullptr)continue;
            ans.push_back(p->val);
            stk.push(p->right);
            stk.push(p->left);
        }
        return ans;
    }
