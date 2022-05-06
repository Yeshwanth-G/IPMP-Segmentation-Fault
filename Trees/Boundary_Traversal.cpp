
class Solution {
public:
   void print_left(Node*root,vector<int>&v){
       if(root==nullptr)return;
     if(root->right!=nullptr||root->left!=nullptr) v.push_back(root->data);
       if(root->left)
       print_left(root->left,v);
       else print_left(root->right,v);
   }
   void print_leaves(Node*root,vector<int>&v){
       if(root==nullptr)return;
       print_leaves(root->left,v);
       if(root->left==NULL&&root->right==NULL)v.push_back(root->data);
       print_leaves(root->right,v);
   }
   void print_right(Node*root,vector<int>&v){
       if(root==nullptr)return;
       if(root->right)
       print_right(root->right,v);
       else print_right(root->left,v);
     if(root->right!=nullptr||root->left!=nullptr) v.push_back(root->data);
   }
    vector <int> boundary(Node *root)
    {
        vector<int>v;
        v.push_back(root->data);
        print_left(root->left,v);
        print_leaves(root->left,v);
        print_leaves(root->right,v);
        print_right(root->right,v);
        return v;
    }
};//O(n),O(n);
