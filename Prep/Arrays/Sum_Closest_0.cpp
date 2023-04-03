 int closestToZero(int arr[], int n)
        {
            // your code here 
            int i=0,j=n-1,ans=-1e9,dis=1e9;
            sort(arr,arr+n);
            while(i<j){
                if(abs(arr[i]+arr[j])<=dis){
                    if(abs(arr[i]+arr[j])==dis){
                        ans=max(ans,arr[i]+arr[j]);
                    }else
                    ans=arr[i]+arr[j];
                    dis=abs(arr[i]+arr[j]);
                }
                if(arr[i]+arr[j]<0){
                    i++;
                }else{
                    j--;
                }
            }
            return ans;
        }
