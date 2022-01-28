class Solution
{
public:
	void sortKSortedArray(vector<int> &nums, int k)
	{
		// Write your code here...
		int n=nums.size();
	priority_queue<int,vector<int>,greater<int>>p(nums.begin(),nums.begin()+k+1);//O(k)
	int s=0;
	for(int i=k+1;i<n;i++){
	nums[s]=p.top();
	p.pop();
	p.push(nums[i]);
	s++;
	}//O((n-k)*logk)
	while(!p.empty()){//O(klogk);
		nums[s]=p.top();
		p.pop();
		s++;
	}
	}
};
