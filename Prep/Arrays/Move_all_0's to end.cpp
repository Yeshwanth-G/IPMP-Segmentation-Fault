void pushZerosToEnd(int arr[], int n) {
	   int i=0,j=0;
	   while(i<n&&j<n){
	       if(arr[j]!=0){
	           swap(arr[i++],arr[j]);
	       }
	       j++;
	   }
	}
//(when you have an array with 2 different type numbers 
// and we want to make all one type numbers come before other-we have 3 methods-count method,two pointers(0,n-1)-both order wont be maintained,
// Two pointers one static 0 and other moving-only order of one type is maintained.)
