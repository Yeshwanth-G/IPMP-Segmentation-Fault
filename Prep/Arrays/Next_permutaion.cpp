void nextPermutation(vector<int>& nums) {
        int i;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]>=nums[i+1])continue;
            else break;
        }
        reverse(nums.begin()+i+1,nums.end());
        if(i>=0){
            int ind=(upper_bound(nums.begin()+i+1,nums.end(),nums[i])-nums.begin());
            swap(nums[i],nums[ind]);
        }
    }
//O(3*n) or O(2*n+logn)=>O(n)
//inplace-O(1)
-----
void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());//inplace replacement...
    }
---------
 
int main(){
vector<int>v={3,2,1};
prev_permutation(v.begin(),v.end());//prev
next_permutation(v.begin(),v.end());//next
for(int i:v)cout<<i<<" ";
return 0;
}
