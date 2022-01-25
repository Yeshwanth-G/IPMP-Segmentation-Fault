class Solution {
public:
    int findUnsortedSubarray(vector<int>& arr) {
        int n=arr.size();
        int s;
        for(s=0;s<n-1;s++){
            if(arr[s]>arr[s+1]){
            break;    
            }
        }
        if(s==n-1)return 0;
        int e;
        for(e=n-1;e>=0;e--){
            if(arr[e]<arr[e-1])break;
        }
        int mini=INT_MAX,maxi=INT_MIN;
        cout<<s<<" "<<e<<endl;
        for(int i=s;i<=e;i++){
            if(arr[i]<mini)mini=arr[i];
            if(arr[i]>maxi)maxi=arr[i];
        }
        for(int i=0;i<s;i++){
            if(arr[i]>mini){
                s=i;
                break;
            }
        }
        for(int i=n-1;i>e;i--){
            if(arr[i]<maxi){
                e=i;
                break;
            }
        }
        
        return e-s+1;
    }
};
