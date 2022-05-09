*---------------------O(n),O(h)-----------------------
void answer(Node*root,vector<int>&temp,vector<vector<int>>&ans){
     if(root==nullptr)return;
     temp.push_back(root->data);
     if(root->left==nullptr&&root->right==nullptr){
         ans.push_back(temp);
     }
     answer(root->left,temp,ans);
     answer(root->right,temp,ans);
     temp.pop_back();
 }
vector<vector<int>> Paths(Node* root)
{
    vector<int>temp;
    vector<vector<int>>ans;
    answer(root,temp,ans);
    return ans;
}
