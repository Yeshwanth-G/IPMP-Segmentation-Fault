//Using DFS*******       
void helper(Node*root,vector<int>&v,int l,int& ml){
    if(root==nullptr)return;
    if(l>ml){
        ml=l;
        v.push_back(root->data);
    }
    helper(root->left,v,l+1,ml);
    helper(root->right,v,l+1,ml);
}
vector<int> rightSideView(TreeNode* root) { 
    vector<int>v;
    int a=-1;
    helper(root,v,0,a);
    return v;
}
--------------------------------------------------------
 //Using BFS******
vector<int> leftView(Node *root)
{
   queue<Node*>q;
   vector<int>v;
   if(root==nullptr)return v;
   q.push(root);
   while(!q.empty()){
       int s=q.size();
       v.push_back(q.front()->data);
       for(int i=0;i<s;i++){
           Node*p=q.front();
           if(p->left)q.push(p->left);
           if(p->right)q.push(p->right);
           q.pop();
       }
   }
   return v;
}
