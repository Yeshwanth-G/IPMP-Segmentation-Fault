	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    //A1:try all pairs,O(n^2),O(1)
	    //A2:map,O(n),O(n)
	    //A3:O(nlogn),O(1)
	    
	    sort(arr,arr+n);
	    //insertion sort,heapsort+quicksort
	    int i=0,j=n-1;
	    while(i<j){
	        int sum=(arr[i]+arr[j]);
	        if(sum==x)return true;
	        else if(sum<x)i++;
	        else j--;
	    }
	    return false;
	}//O(n),O(1) if sorted else O(nlogn)
---------------------
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
int twosum(int a[],int p,int n,int x){
  unordered_map<int,int>mp;
  for(int i=p+1;i<n;i++){
      if(mp.find(x-a[i])!=mp.end())return 1;
      mp[a[i]]++;
  }
  return 0;
}

};//O(n),O(n)-sorted or not does not need
