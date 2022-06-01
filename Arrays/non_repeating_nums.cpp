vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        // Approach-1:Sort the array and check if the adjacant numbers are different-O(nlogn),O(1)
        // sort(nums.begin(),nums.end());
        // vector<int>ans;
        // for(int i=0;i<nums.size();i++){
        //     if(i==0){
        //         if(nums[i]!=nums[i+1])
        //         ans.push_back(nums[i]);
        //     }
        //     else if(i==nums.size()-1){
        //         if(nums[i]!=nums[i-1])ans.push_back(nums[i]);
        //     }
        //     else
        //     if((nums[i]!=nums[i-1])&&nums[i]!=nums[i+1]){
        //         ans.push_back(nums[i]);
        //     }
        // }
        //Approach-2:find xor of all elements finally we will have xor of non repeating elements 
        // then we can extract elements known their xor value;-O(N),O(1);
        // int x,a=0,b=0;
        // for(int i=0;i<nums.size();i++){
        //     x=x^nums[i];
        // }
        // int set=x&~(x-1);
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]&set)
        //     a=a^nums[i];
        //     else b=b^nums[i];
        // }
        // vector<int>ans;
        // ans.push_back(a);
        // ans.push_back(b);
        // sort(ans.begin(),ans.end());
        //Approach-3:push all elements into map or set then traverse map to find numbers with frequency 1;-O(n),O(n)
        unordered_map<int,int>hmap;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            hmap[nums[i]]++;
        }
        for(auto i=hmap.begin();i!=hmap.end();i++){
            if(i->second==1)ans.push_back(i->first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
