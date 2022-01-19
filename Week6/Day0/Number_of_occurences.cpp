class Solution {
public:
    int ending(vector<int>&nums,int target){
        int n=nums.size();
        int s=0,e=n-1,mid;
        while(s+1<e){
            mid=(s+e)/2;
            if(target>=nums[mid]){
                s=mid;
            }
            else{
                e=mid-1;
            }
        }
        if(nums[e]==target)return e;
        if(nums[s]==target)return s;
        return -1;
    }
    int begining(vector<int>&nums,int target){
        int n=nums.size();
        int s=0,e=n-1,mid;
        while(s<e){
            mid=(s+e)/2;
            if(target<=nums[mid]){
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        if(nums[e]==target)return e;
        return -1;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(!nums.empty()){
        int l=begining(nums,target);
        int up=ending(nums,target);
          if(l==-1&&up==-1)return 0;
        return up-l+1;
    }
      return 0;
};
