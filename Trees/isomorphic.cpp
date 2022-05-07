
    bool isIsomorphic(Node *root1,Node *root2)
    {
      if(root1==nullptr&&root2==nullptr)return true;
      else if(root1==nullptr||root2==nullptr)return false;
      if(root1->data!=root2->data)return false;
      bool b1=isIsomorphic(root1->left,root2->left);
      bool b2=isIsomorphic(root1->left,root2->right);
      bool b3=isIsomorphic(root1->right,root2->left);
      bool b4=isIsomorphic(root1->right,root2->right);
      return ((b1&&b4)||(b2&&b3));
    }
