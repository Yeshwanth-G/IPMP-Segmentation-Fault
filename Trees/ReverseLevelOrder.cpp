vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*>q;
    q.push(root);
    vector<int>v;
    if(root==NULL)return v;
    while(!q.empty()){
        Node*p=q.front();
        if(p->right)q.push(p->right);
        if(p->left)q.push(p->left);
        v.push_back(p->data);
        q.pop();
    }
    reverse(v.begin(),v.end());
    return v;
    
}//O(n),O(n)
