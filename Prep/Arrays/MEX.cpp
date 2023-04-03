****For calculating mex you only need elements in the range 1-n or (0-n-1)
 int missingNumber(int arr[], int n) 
    { 
        int mn=1e9;
        for(int i=0;i<n;i++){
            if(arr[i]>0)
            mn=min(mn,arr[i]);
        }
        if(mn!=1)return 1;
        for(int i=0;i<n;i++){
            if(arr[i]<=0||arr[i]>n)//replacing all elemnts <=0 and >n with 1;
            arr[i]=1;
        }
        for(int i=0;i<n;i++){
            int p=abs(arr[i]);//marking presence algo...
                if(arr[p-1]>0)
                arr[p-1]*=-1;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0)return (i+1);   
        }
        return n+1;
    } 
-------------------------------------------------------------------------------
 making all elements positive(>=1) by subtracting (min-1)..
 
class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        int mn=1e9;
        for(int i=0;i<n;i++){
            mn=min(mn,arr[i]);
        }
        for(int i=0;i<n;i++){
            arr[i]-=(mn-1);
        }
        for(int i=0;i<n;i++){
            int p=abs(arr[i]);
            p+=(mn-1);
            if(p>0&&p<=n){
                if(arr[p-1]>0)
                arr[p-1]*=-1;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0)return (i+1);   
        }
        return n+1;
    } 
};
