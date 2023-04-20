//root to leftmost leaf by taking left and if left is null take right...
//leaves
//rightmost node to root....
or
 //root to leftmost leaf node
  //leaves
  //rightmost leaf to root.
void leaves(Node*root,vector<int>&ans){
        if(!root)return;
        if(root->left==nullptr&&root->right==nullptr)ans.push_back(root->data);
        leaves(root->left,ans);
        leaves(root->right,ans);
    }
    vector <int> boundary(Node *root)
    {
        vector<int>ans;
        Node*cur;
        ans.push_back(root->data);
        if(root->left==nullptr&&root->right==nullptr)return ans;
        cur=root->left;
        while(cur){
            if(cur->left==nullptr&&cur->right==nullptr)break;
            ans.push_back(cur->data);
            if(cur->left){
                cur=cur->left;
            }else cur=cur->right;
        }
        leaves(root,ans);
        vector<int>pq;
        cur=root->right;
        while(cur){
            if(cur->left==nullptr&&cur->right==nullptr)break;
            pq.push_back(cur->data);
            if(cur->right){
                cur=cur->right;
            }else cur=cur->left;
        }
        reverse(pq.begin(),pq.end());
        for(int i:pq)ans.push_back(i);
        return ans;
    }
