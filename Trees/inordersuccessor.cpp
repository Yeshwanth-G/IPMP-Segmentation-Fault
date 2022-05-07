
class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int ans;
    Solution(){
        ans=-1;
    }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        if(root==nullptr)return nullptr;
        if(root->data<=x->data){
            inOrderSuccessor(root->right,x);
        }else{
            if(ans==-1||root->data<ans)ans=root->data;
            inOrderSuccessor(root->left,x);
        }
        return new Node(ans);
        
    }
};
---------------------------------------------------------------
//inorder and return first element greater than x;
class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    int ans;
    Solution(){
        ans=-1;
    }
  void inorder(Node*root,Node*x,Node*ans){
    if(root==nullptr)return;
    inorder(root->left,x,ans);
    if(root->data>ans->data&&ans==nullptr){
    ans=root;
    return;}
    inorder(root->right,x,ans);
  }
    Node * inOrderSuccessor(Node *root, Node *x)
    {
     Node*ans=nullptr;
      inorder(root,x,ans);
      return ans;
    }
};
