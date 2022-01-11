class Solution{
public:	
//Approach :Go each element position in array and increase the value there by k and then traverse array to find maximum occuring/maximum number in modified array;
  //O(n),O(1)
	int maxRepeating(int *arr, int n, int k) {
	    // code here
	    for(int i=0;i<n;i++){
	        arr[arr[i]%k]+=k;
	    }
	    int count=arr[0]/k,i=0;
	    for(int j=1;j<n;j++){
	        int p=arr[j]/k;
	        if(p>count){
	            i=j;
	            count=p;
	            
	        }
	    }
	    return i;
	    
	}

};
