vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        //Approach 1:Extract all subarrays and get th subarray with required sum;
        //O(N*N),O(1)
        // long long sum=0;
        vector<int>ans;
        // for(int i=0;i<n;i++){
        //     sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+arr[j];
        //         if(sum>s)break;
        //         if(sum==s){
        //         ans.push_back(i+1);
        //         ans.push_back(j+1);
        //         return ans;
        //     }
        //     }
        // }
    //Approach 1:Traverse array and maintain current sum 
    //if sum>k delete the front element else add the next element
    //O(n),O(1)
        long long sum=0,l=0;
        int i=0;
        for(i=0;i<n;i++){
            if(sum<s)
            sum=sum+arr[i];
            if(sum>s){
                sum=sum-arr[l];
                l++;
                if(sum>s)i--;
            }
            if(sum==s){
                ans.push_back(l+1);
                ans.push_back(i+1);
                break;}
        }
        if(ans.empty())ans.push_back(-1);
        return ans;
    }
