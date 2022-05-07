
//Using DFS*******O(n);
vector<int> helper(Node*root,int k,vector<int>&v){
    if(root==nullptr)return v;
    if(k==0){
        v.push_back(root->data);
        return v;
    }
    helper(root->left,k-1,v);
    helper(root->right,k-1,v);
    return v;}
vector<int> Kdistance(struct Node *root, int k)
{
    vector<int>v;
    return helper(root,k,v);
}


//Using BFS-O(k);**********
vector<int> Kdistance(struct Node *root, int k)
{
  queue<Node*>q;
  vector<int>v;
  int dist=0;
  q.push(root);
  while(!q.empty()){
      int s=q.size();
      if(dist==k){
          for(int i=0;i<s;i++){
            v.push_back(q.front()->data);
              q.pop();
          }
          return v;
      }
      for(int i=0;i<s;i++){
        Node*p=q.front();
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
        q.pop();
      }
      dist++;
  }
  return v;}
