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
	}
