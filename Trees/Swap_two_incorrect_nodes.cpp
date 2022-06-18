//Go for inorder traversal keep track of previous node and if prev>current store that in some pointer and swap them at last--exception for adjacant elements(handle by keeping one more pointer)
void inorder(Node*root,Node*&prev,Node*&p1,Node*&p2,Node*&temp){
      if(root==nullptr)return;
      inorder(root->left,prev,p1,p2,temp);
      if(prev==nullptr)prev=root;
      if(prev->data>root->data){
          if(p1==nullptr){p1=prev;temp=root;}
          else if(p2==nullptr)p2=root;
      }
      prev=root;
      inorder(root->right,prev,p1,p2,temp);
 }
    void correctBST( struct Node* root )
    {
        Node*r1=nullptr,*r2=nullptr,*p=nullptr,*temp=nullptr;
        inorder(root,p,r1,r2,temp);
        if(r2==nullptr){
            r2=temp;}
        
        swap(r1->data,r2->data);
    }
-------------------------------------------------------------------------------------------------------------------------------------
//without temp.
void inorder(Node*root,Node*&prev,Node*&p1,Node*&p2){
      if(root==nullptr)return;
      inorder(root->left,prev,p1,p2);
      if(prev==nullptr)prev=root;
      if(prev->data>root->data){
          if(p1==nullptr){p1=prev;p2=root;}
          else p2=root;
      }
      prev=root;
      inorder(root->right,prev,p1,p2);
  }
    void correctBST( struct Node* root )
    {
        Node*r1=nullptr,*r2=nullptr,*p=nullptr,*temp=nullptr;
        inorder(root,p,r1,r2);
        if(r2==nullptr){
            r2=temp;
        }
        swap(r1->data,r2->data);
    }
