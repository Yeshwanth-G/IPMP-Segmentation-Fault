 void answer(TreeNode*root,vector<int>&ans){
        if(!root)return;
        ans.push_back(root->val);
        answer(root->right,ans);
        answer(root->left,ans);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        //LRroot==>rev(rootRL)
        answer(root,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
------------------------------------------------------
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        //LRroot==>rev(rootRL)
        stack<TreeNode*>stk;
        if(!root)return {};
        stk.push(root);
        while(stk.empty()==false){
            TreeNode*p=stk.top();
            stk.pop();
            ans.push_back(p->val);
            if(p->left)
            stk.push(p->left);
            if(p->right)
            stk.push(p->right);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
------------------------------------------------------
vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        TreeNode*cur=root;
        //rootRL;
        //LRroot
        while(cur){
            TreeNode*p=cur->right;
            if(!p){
                ans.push_back(cur->val);
                cur=cur->left;
                continue;
            }
            while(p->left&&p->left!=cur){
                p=p->left;
            }
            if(p->left==nullptr){
                ans.push_back(cur->val);
                p->left=cur;
                cur=cur->right;
            }else{
                p->left=nullptr;
                cur=cur->left;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
}
------------------------------------------------------
