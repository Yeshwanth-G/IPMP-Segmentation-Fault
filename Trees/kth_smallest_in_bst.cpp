----------------------DFS----------------------
int kthSmallest(TreeNode* root, int &k) {
       
        if(root==nullptr) return -1;
        ans=kthSmallest(root->left,k);
        if(k==1){k--;return root->val;}
        else k--;
        if(ans==-1)ans=kthSmallest(root->right,k);
        return ans;
    }
//Leetcode follow up*********************
//Morris traversal is efficient method see that also.
