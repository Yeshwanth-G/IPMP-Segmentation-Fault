class Solution {
public:
 //Approach 1:Extraxt sum of all subarrays and output maximum among them;
    int maxSubArray(vector<int>& nums) {
        // int max=INT_MIN,sum;
        int n=nums.size();
        // for(int i=0;i<n;i++){
        //     sum=0;
        //     for(int j=i;j<n;j++){
        //         sum=sum+nums[j];
        //         if(sum>max)max=sum;
        //     }
        // }
        // return max;
 //Approch 2:Kadane's Algorithm: Donot include a sub array whose sum will be -ve; 
    int cs=0,maxsum=INT_MIN,end;
        for(int i=0;i<n;i++){
            cs=cs+nums[i];
            if(cs>maxsum){maxsum=cs;
                         end=i;}
            if(cs<0)cs=0;
            
        }
        cout<<end<<endl;
        int i=end;
        int sum=nums[i];
        while(sum!=maxsum){
            cout<<nums[i]<<" ";
            i--;
            sum=sum+nums[i];
        }
        cout<<nums[i]<<" "<<endl;
        return maxsum;
    }
};
