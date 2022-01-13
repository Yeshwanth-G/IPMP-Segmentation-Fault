class Solution {
public:
  //Approach 0:The missing number will definetely lie between 1 and n+1(if all elements from 1 to n are in array) only,so for each value from 1 to n+11 check if its present in array;
  //Time:O(nlogn)-binary search or O(n^2)-linear search;,space-O(1);
    int firstMissingPositive(vector<int>&c) {
        vector<long long>nums;
        for(int i=0;i<c.size();i++){
            long long d=(long long)c[i];
            nums.push_back(d);
        }
        int n=nums.size();
        long long max=INT_MIN;
        for(int i=0;i<n;i++){
           if(nums[i]>max)max=nums[i];
        }
        max=max+1;
            for(int i=0;i<n;i++){
               if(nums[i]>0&&nums[i]%(max)>0&&nums[i]%(max)<=n){
                   if(nums[(nums[i]-1)%(max)]<0)nums[(nums[i]-1)%(max)]=max;
                   else
                   nums[(nums[i]-1)%(max)]+=max;
               } 
            }
        for(int i=0;i<n;i++){
            if(nums[i]<max)return i+1;
        }
            return n+1;
    }
};

class Solution {
public:
//   Approach 1:Take each elemnt a[i] and place it at index i-1(0 based) ignore if a[i] is more than n or negative,again traverse array and find first position where a[i]!=i;
 //Time:O(n),Space:O(1)
    int firstMissingPositive(vector<int>&nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0&&nums[i]<n&&nums[nums[i]-1]!=nums[i]){
               swap(nums[i],nums[nums[i]-1]);
                i--;
                
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1)return i+1;
        }
            return n+1;
    }
};
