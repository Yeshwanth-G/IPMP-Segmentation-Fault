class Solution
{
public:
int floorr(vector<int>&nums,int p){
	int s=0,e=nums.size()-1,mid,ans=-1;
	while(s<=e){
		mid=(s+e)/2;
		if(nums[mid]>p){
			e=mid-1;
		}
		else{
		s=mid+1;
		ans=nums[mid];
		}
	}
	return ans;
}
int ceiling(vector<int>&nums,int p){
	int s=0,e=nums.size()-1,mid,ans=-1;
	while(s<=e){
		mid=(s+e)/2;
		if(nums[mid]<p){
			s=mid+1;
		}
		else
		if(nums[mid]>=p){
			e=mid-1;
			ans=nums[mid];
		}
	}
	return ans;
}
	pair<int,int> findFloorAndCeil(vector<int>&nums, int x)
	{	pair <int,int>p;
		p.first=floorr(nums,x);
		p.second=ceiling(nums,x);
		return p;
	}
};
