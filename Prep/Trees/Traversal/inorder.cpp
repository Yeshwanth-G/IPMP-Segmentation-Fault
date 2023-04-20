Tree Traversals...
-Inorder-O(n),O(logn)
void answer(TreeNode*root,vector<int>&ans){
        if(!root)return;
        answer(root->left,ans);
        ans.push_back(root->val);
        answer(root->right,ans);
    }
---------------------------
-Inorder Iterative
vector<int> inorderTraversal(TreeNode* root) {
     stack<pair<int,TreeNode*>>stk;
     if(root==nullptr)return {};
     stk.push({0,root});
     //O(logn),O(n)
     vector<int>ans;
     while(stk.empty()==false){
         pair<int,TreeNode*>p=stk.top();
         if(p.first==1){
             ans.push_back(p.second->val);
             stk.pop();
             if(p.second->right)
             stk.push({0,p.second->right});
         }else {
             stk.top().first=1;
             if(p.second->left)
             stk.push({0,p.second->left});
         }
     }
      return ans;
    }
--------------------------------
//Morris-O(n),O(1)
vector<int> inorderTraversal(TreeNode* root) {
        TreeNode*cur=root;
        vector<int>ans;
        while(cur){
            TreeNode*p=cur->left;
            while(p&&p->right!=cur&&p->right){
                p=p->right;
            }
            if(p&&p->right==nullptr){
                p->right=cur;
                cur=cur->left;
            }else{
                ans.push_back(cur->val);
                if(p)
                p->right=nullptr;
                cur=cur->right;
            }
        }
        return ans;
    }
