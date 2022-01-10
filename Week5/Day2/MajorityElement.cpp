class Solution {
public:
 //Approach:sort the array and keep a count of ech element and return the ones whose count is more than n/2;
 //O(nlogn),O(1)
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){count++;
            if(count>n/2){
                return nums[i-1];
            }}
            else{ 
                count=1;
            }
        }
    
    return nums[0];
    }
};

class Solution {
public:
//Approach :Moore Algorithm:
//Since majority element occurs n/2+1 minimum and other elements occur n/2 or n/2 times,cancelleing the majority element with the non majority ones will leave us the majority element;
//O(n),O(1);
    int majorityElement(vector<int>& nums) {
        int count=1,maj=0,n=nums.size();
        for(int i=1;i<n;i++){
           if(nums[i]==nums[maj])count++;
            else count--;
            if(count==0){
                maj=i;
                count=1;
            }
        }
    return nums[maj];
    }
};
