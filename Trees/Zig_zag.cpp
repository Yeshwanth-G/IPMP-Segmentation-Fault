class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>vec;
        vector<int>t;
        deque<TreeNode*>d;
        if(root==NULL)return vec;
        d.push_back(root);
        d.push_back(NULL);
        int i=0;
         TreeNode*p=root;
        while(!d.empty()){
            if(i%2==0){
                p=d.front();
                if(p==NULL){  
                    i++;
                    vec.push_back(t);
                    t.clear();
                    if(d.size()<2)break;
                    continue;
                }
                if(p->left)d.push_back(p->left); 
                if(p->right)d.push_back(p->right);
                d.pop_front();
                t.push_back(p->val);
            }
            else {
                 p=d.back();
                if(p==NULL){
                    i++;
                    vec.push_back(t);
                    t.clear();
                    if(d.size()<2)break;
                    continue;
                }
                
                if(p->right)d.push_front(p->right);
                if(p->left)d.push_front(p->left);
                d.pop_back();
                t.push_back(p->val);
            }
            }
        return vec;
    }
};
