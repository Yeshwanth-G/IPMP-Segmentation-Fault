class Solution {
public:
    //Approach 0:for each element maintain two arrays that stores maximum from left and right respectively and min(left_max[i],right_max[i])-a[i] will give water trapped at that block
    int trap(vector<int>& a) {
        int n=a.size();
        vector<int>maxr(n);
        maxr[n-1]=a[n-1];
        int mxs=a[0],ans=0;
        for(int i=n-2;i>=0;i--){
            if(a[i]>maxr[i+1])maxr[i]=a[i];
            else maxr[i]=maxr[i+1];
        }
        for(int i=1;i<n;i++){
            if(a[i]>mxs)mxs=a[i];
            int d=min(mxs,maxr[i])-a[i];
            ans+=d;
        }
        return ans;
    }
};

class Solution {
public:
    int trap(vector<int>& a) {
        //Approach 2:Two pointer Approach;
//Have two pointers one at starting and other at end,and maintain left maximum //for the left pointer and right maximum for right pointer then if left max is //less than right max then left will always be added added to sum irrespective //what will be the futer value of right max and if right max is less then it //will be added to sum irrespective of future left max;
//O(N),O(1);
        int n=a.size();
        int s=1,e=n-2,lm=a[0],rm=a[n-1],ans=0;
        while(s<=e){
            if(a[s]>lm)lm=a[s];
            if(a[e]>rm)rm=a[e];
            if(lm<=rm){
                ans+=(lm-a[s]);
                s++;
            }
            else{
                ans+=(rm-a[e]);
                    e--;
            }
        }
        return ans;
    }
};
