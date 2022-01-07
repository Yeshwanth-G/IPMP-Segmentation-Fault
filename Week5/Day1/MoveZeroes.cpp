class Solution {
public:
    void moveZeroes(vector<int>& nums) {
//Approach 1:Two pointer Approach,place one pointer at first zero and another at first pointer+1 index then traverse the array and if second pointer points to nonzero and first one points to 0 then swap them else increment the pointers accordingly;==>O(n),O(1)
     // int a=0,b=-1,n=nums.size();
     //    while(a<n&&b<n){
     //        if(b<a){
     //            if(nums[a]!=0){
     //                a++;b++;
     //            }
     //            else b=a+1;
     //        }
     //        else{
     //            if(nums[a]==0&&nums[b]!=0){
     //                swap(nums[a],nums[b]);
     //            }
     //            else if(nums[a]!=0)a++;
     //            else if(nums[b]==0)b++;
     //        }
     //    }
//Approach 2:Maintaing non zero count and placing each nonzero at arr[present_non-zero_count];
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[count]=nums[i];
                count++;
            }
        }
        for(int i=count;i<n;i++){
            nums[i]=0;
        }
    }
};
