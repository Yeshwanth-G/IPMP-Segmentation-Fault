//since only increment operations allowed;
//find sum of its children if its more than root value incremnt root value and recursively apply on left and right;
//if sum is less than root value,change value of its children and recursively apply on its children;
void changeTree(BinaryTreeNode < int > * root) {
    if(root==nullptr)return;
	if(root->left==nullptr&&root->right==nullptr)return;
	int x=0;
	x+=root->left==nullptr?0:root->left->data;
	x+=root->right==nullptr?0:root->right->data;
	if(x>root->data)root->data=x;
	else{
		int diff=root->data-x;
		if(root->left)root->left->data+=diff;
		else
		if(root->right)root->right->data+=diff;
	}
	changeTree(root->left);
	changeTree(root->right);
	int d=0;
	d+=root->left==nullptr?0:root->left->data;
	d+=root->right==nullptr?0:root->right->data;
	if(d>root->data)root->data=d;
}//O(N) only*****************
