class Solution {
public:
    bool helper(TreeNode*root,TreeNode*p,stack<int>&st){
        if(root==nullptr)return false;
        if(root->val==p->val){
            st.push(root->val);
            return true;
        }
        if(helper(root->left,p,st)){
            st.push(root->val);
            return true;
        }
        else if(helper(root->right,p,st)){
            st.push(root->val);
            return true;
        }
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        stack<int>st1,st2;
        helper(root,p,st1);
        helper(root,q,st2);
        int x;
        while(!st1.empty()&&!st2.empty()){
            if(st1.top()==st2.top()){
                x=st1.top();
                st1.pop();
                st2.pop();
            }
            else break;
        }
        return new TreeNode(x);
    }
};
//push all ancestors of two two nodes and find the lowest common one among them-->O(n),O(n);



TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr)return root;;
        if(root->val==p->val||root->val==q->val)return root;
        TreeNode*l=lowestCommonAncestor(root->left,p,q);
        TreeNode*r=lowestCommonAncestor(root->right,p,q);
        if(l!=nullptr&&r!=nullptr)return root;
        if(!l)return r;
        return l;
}//O(n),O(1)==>O(n)(recursion stack);
