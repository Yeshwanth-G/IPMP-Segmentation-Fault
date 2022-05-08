//Inorder traversal sorted**********
    bool inorder(Node*root,Node*&prev){
        if(root==nullptr)return true;
        if(inorder(root->left,prev)==false)return false;
        if(prev==nullptr)prev=root;
        if(root->data<prev->data)return false;
        prev=root;
        if(inorder(root->right,prev)==false)return false;
        return true;
    }
    bool isBST(Node* root) 
    {
        Node*p=nullptr;
       return inorder(root,p);
        
    }
-------------------------------------------------------------------------------
 //check if node values in min,max range;
bool answer(Node*root,int min,int max){
        if(root==nullptr)return true;
        if(root->data<min||root->data>max)return false;
        return inorder(root->left,min,root->data-1)&&inorder(root->right,root->data+1,max);;
        
    }
    bool isBST(Node* root) 
    {
        return answer(root,INT_MIN,INT_MAX);
    }
