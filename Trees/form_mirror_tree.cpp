Go to every node and swap its children;
__________________DFS______________________
  void mirror(Node* node) {
        if(node==nullptr)return;
        swap(node->left,node->right);
        mirror(node->left);
        mirror(node->right);
    }
_______________BFS__________________________
void mirror(Node* node) {
        if(node==nullptr)return;
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            Node*p=q.front();
            swap(p->left,p->right);
            q.pop();
            if(p->left)q.push(p->left);
            if(p->right)q.push(p->right);
        }
    }
