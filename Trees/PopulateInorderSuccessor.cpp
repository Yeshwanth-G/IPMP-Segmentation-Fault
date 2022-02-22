class Solution
{
public:
    void ans(Node*root,Node* &prev){
            if(root!=NULL){
                ans(root->right,prev);
                root->next=prev;
                prev=root;
                ans(root->left,prev);
            }
        
    }
    void populateNext(Node *root)
    {
        Node*p=NULL;
        ans(root,p);
    }
};//O(N),O(h)-same as inorder traversal;
