---------------------BFS----------------------
//change pushing order***
bool IsFoldable(Node* root)
{
    if(root==nullptr)return true;
    queue<Node*>q;
    q.push(root->left);
    q.push(root->right);
    while(!q.empty()){
        Node*p1=q.front();
        q.pop();
        Node*p2=q.front();
        q.pop();
        if(p1==nullptr&&p2==nullptr)continue;
        if((p1==nullptr&&p2!=nullptr)||(p1!=nullptr&&p2==nullptr))return false;
        q.push(p1->left);
        q.push(p2->right);
        q.push(p1->right);
        q.push(p2->left);
    }
    return true;}
-----------------------------------DFS---------------
 bool answer(Node*r1,Node*r2){
    if(r1==nullptr&&r2==nullptr)return true;
    if(r1==nullptr||r2==nullptr)return false;
    return answer(r1->left,r2->right)&&answer(r1->right,r2->left);
}
bool IsFoldable(Node* root)
{
    if(root==nullptr)return true;
   return answer(root->left,root->right);
}
