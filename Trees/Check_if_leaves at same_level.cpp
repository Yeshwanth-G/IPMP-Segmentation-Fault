
class Solution{
  public:
    /*bfs*/O(N)
    bool answer(Node*root,int l,int &x){
        if(root==nullptr)return true;
        if(root->left==NULL&&root->right==NULL){
            if(x==-1)x=l;
            else{
                if(l!=x)return false;
                else return true;
            }
        }
        return answer(root->left,l+1,x)&&answer(root->right,l+1,x);
    }
    bool check(Node *root)
    {
        int a=-1;
       return answer(root,0,a);
    }
};//O(n);

class Solution{
  public:
    /*dfs*/
    bool check(Node *root)
    {
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
            bool b=true;
    while(!q.empty()){
        Node*p=q.front();
        if(p==nullptr){
            q.pop();
            q.push(nullptr);
            continue;
        }
        if(p->left==NULL&&p->right==NULL){
            while(!q.empty()&&q.front()!=nullptr){
                if(q.front()->left!=NULL||q.front()->right!=NULL){
                   b=false;
                    break;
                }
                else{
                    q.pop();
                }
            }
                break;
            
        }
        if(p->left)q.push(p->left);
        if(p->right)q.push(p->right);
        q.pop();
    }
    return b;
    }
};//O(n)
