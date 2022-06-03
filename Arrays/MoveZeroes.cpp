//count method see the swapping thing.
void pushZerosToEnd(int arr[], int n) {
	    int count=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            arr[count++]=arr[i];
	            if(count-1<i)arr[i]=0;
	        }
	    }
	    
	}
-----------------------------------------------------------
  //Lomuto partition.
  void pushZerosToEnd(int arr[], int n) {
	    int a=0;
	    for(int i=0;i<n;i++){
	        if(arr[i]!=0){
	            swap(arr[i],arr[a++]);
	        }
	    }
