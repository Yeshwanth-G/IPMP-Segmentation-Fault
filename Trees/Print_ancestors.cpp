
 bool answer(Node*root,int k,vector<int>&p){
      if(root==nullptr)return false;
      p.push_back(root->data);
      if(root->data==k){p.pop_back();return true;}
      if(answer(root->left,k,p)==true)return true;
      if(answer(root->right,k,p)==true)return true;
      p.pop_back();
      return false;
  }
    vector<int> Ancestors(struct Node *root, int target)
    {
        vector<int>v;
         answer(root,target,v);
         reverse(v.begin(),v.end());
         return v;
    }
