//O(N^2)***********
int height(TreeNode*root){
       if(root==nullptr)return 0;
        return 1+max(height(root->left),height(root->right));
}
bool isBalanced(TreeNode* root) {
        if(root==nullptr)return true;
        if(abs(height(root->left)-height(root->right))>1)return false;
        return isBalanced(root->left)&&isBalanced(root->right);
}
-------------------------------------------------
//O(n)
int height(TreeNode*root){
       if(root==nullptr) return 0;
       int lh=height(root->left);
       int rh=height(root->right);
       if(lh==-1||rh==-1)return -1;
       if(abs(lh-rh)>1)return -1;
       return 1+max(lh,rh);
    }
bool isBalanced(TreeNode* root) {
      return (height(root)>=0);
}
-----------------------------------------------
 //O(n)
     int height(TreeNode*root,int &h){
        int lh=0,rh=0;
        if(root==nullptr){
            h=0;
            return true;
        }
      bool b1=height(root->left,lh);
      bool b2=height(root->right,rh);
      h=1+max(lh,rh);
      if(abs(lh-rh)>1)return false;
        return b1&&b2;
    }
    bool isBalanced(TreeNode* root) {
        int p=0;
        return height(root,p);
    }
