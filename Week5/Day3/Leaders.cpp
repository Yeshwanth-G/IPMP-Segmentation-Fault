class Solution{
//Maintaining a right maximum and updating it as we traverse the array;
  //O(n),O(1);
  public:
    vector<int> leaders(int arr[], int n){
        // Code here
        vector<int>v;
        int maxr=arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxr){v.push_back(arr[i]);
                maxr=arr[i];
            }
        }
        reverse(v.begin(),v.end());
        return v;
        
    }
};
