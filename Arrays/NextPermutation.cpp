//start from right find first index that nums[i]<nums[i-1],this is the element where we can change..find the element that is just greater than nums[i-1]
//ans swap it with this and sort the remaing part on right.
//now sincle right part is in decreasing order we can search for next greater using binary search,and instead of sorting right part we can simply reverse it.
class Solution {
public:
    void nextPermutation(vector<int>& nums) {//O(n)*****
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int j=i;
                for(;j<nums.size();j++){
                    if(nums[j]<=nums[i-1]){
                        break;
                    }
                }
                swap(nums[i-1],nums[j-1]);
                reverse(nums.begin()+i,nums.end());
                return;
            }
            
        }
        reverse(nums.begin(),nums.end());
    }
};-O(3n)=O(n)
----------------------------------------------------------------------
//using binary search.
 class Solution {
public:
    int find_greater(vector<int>&v,int s,int e,int t){
        int ans=-1;
        while(s<=e){
            int mid=(e+s)/2;
            if(v[mid]>t){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return ans;
    }
    void nextPermutation(vector<int>& nums) {//O(n)*****
        int n=nums.size();
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                int res=find_greater(nums,i,n-1,nums[i-1]);
                swap(nums[i-1],nums[res]);
                reverse(nums.begin()+i,nums.end());
                return;
            }
        }
        reverse(nums.begin(),nums.end());
    }
};--O(n)
