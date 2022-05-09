
 void answer(Node*root,int cs,int &ms,vector<int>&p,vector<int>&max){
        if(root==nullptr)return;
        cs+=root->data;
        p.push_back(root->data);
        if(root->left==nullptr&&root->right==nullptr){
            if(cs>ms){max=p;ms=cs;}
        }
        answer(root->left,cs,ms,p,max);
        answer(root->right,cs,ms,p,max);
        p.pop_back();
    }
    int maxPathSum(Node* root)
    {
        int max=INT_MIN;
        vector<int>p,m;
        answer(root,0,max,p,m);
        for(int i:m)cout<<i<<" ";
        return max;
    }
