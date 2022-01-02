//Approach 1:Maintaing two arrays,one stroing the minmum value til that point and the other storing maximum value after that point,
//then traversing array and checking if minmum till that point and maximum till that point are not same if so returning true;else false==>O(n),O(n)
// bool increasingTriplet(vector<int>& nums) {
//      int size=nums.size();
//         int mina[size],maxa[size],ind=1;
//         mina[0]=nums[0];
//         maxa[size-1]=nums[size-1];
//     for(int i=1;i<size;i++){
//     mina[ind]=min(nums[i],mina[ind-1]);
//         ind++;
//     }
//         ind=size-2;
//     for(int i=nums.size()-2;i>=0;i--){
//         maxa[ind]=max(nums[i],maxa[ind+1]);
//         ind--;
//     }
//     for(int i=1;i<size-1;i++){
//         if(mina[i]!=nums[i]&&maxa[i]!=nums[i])
//             return true;
//     }
//         return false;
//     }
//Approach-2:updating the first and second values of required increasing sequence as we traverse through array,==>O(n),O(1);
    bool increasingTriplet(vector<int>& nums) {
     int f=INT_MAX,s=INT_MAX;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<=f)
            f=nums[i];
        else if(nums[i]<=s)
            s=nums[i];
        else return true;
    }
        return false;
    }
