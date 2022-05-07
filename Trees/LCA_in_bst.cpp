//DFS***O(n)
Node* LCA(Node *root, int n1, int n2)
{
  if(root==nullptr)return root;
  if(root->data>=min(n1,n2)&&root->data<=max(n1,n2))return root;
  if(root->data<min(n1,n2))return LCA(root->right,n1,n2);
  if(root->data>max(n1,n2))return LCA(root->left,n1,n2);
}
--------------------------------------------------------------
Iterative:
Node* LCA(Node *root, int n1, int n2)
{
  while(root!=nullptr){
  if(root->data>=min(n1,n2)&&root->data<=max(n1,n2))return root;
  if(root->data<min(n1,n2))root=root->right;
  if(root->data>max(n1,n2))root=root->left;}
  return root;
}
