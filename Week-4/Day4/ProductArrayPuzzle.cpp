class Solution{
  public:
//Approach 0 : iterate the arry from left two right and stroe the product of elements
//to the left of given element and then iterate the array backwards and 
//multiply the product of elements to the right of given element
//Time:O(n),space:O(1);
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        vector<long long int>v(n,1);
        for(int i=1;i<n;i++){
            v[i]=nums[i-1]*v[i-1];
        }
        long long int r=1;
        for(int i=n-2;i>=0;i--){
            r=r*nums[i+1];
            v[i]=v[i]*r;
        }
        return v;
    }
};
