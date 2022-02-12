class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     //O(n)***
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
            int a=nums[i],max=INT_MAX,max_ind=-1;
            for(int j=i+1;j<n;j++){
             if(nums[j]>a&&nums[j]<=max){
                 max=nums[j];
                 max_ind=j;
             }
            }
            if(max_ind!=-1){
                swap(nums[i],nums[max_ind]);
                reverse(nums.begin()+i+1,nums.end());
                return;
            }
            }
        }
        reverse(nums.begin(),nums.end());
    }
};//O(n)
