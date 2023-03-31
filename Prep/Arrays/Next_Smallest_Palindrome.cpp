vector<int> generateNextPalindrome(int nums[], int n) {
	    int i,j;
	    int carry=1;
	    vector<int>b;
	    if(n%2==0){
	        i=(n/2);
	        j=i-1;
	    }else{
	        i=j=(n/2);
	    }
	    int ti=i,tj=j;
	    int bl=-1;
	    while(j>=0){
	        if(nums[j]>nums[i]&&bl==-1){
	            bl=1;
	        }else if(nums[j]<nums[i]&&bl==-1){
	            bl=0;
	        }
	        nums[i]=nums[j];
	        j--;
	        i++;
	    }
	    if(bl==1){
	        for(int i=0;i<n;i++){
	            b.push_back(nums[i]);
	        }
	        return b;
	    }//nearest palindrome...
 
	    j=tj;
	    i=ti;
	    while(j>=0){
	        int x=nums[i]+carry;
	        nums[i]=(x)%10;
	        carry=(x)/10;
	        nums[j]=nums[i];
	        i++;
	        j--;
	    }
	    if(carry!=0){
	        b.push_back(carry);
	    }
	    for(int i=0;i<n;i++)b.push_back(nums[i]);
	    if(carry>0)
	    b.back()=carry;
	    return b;
	}
//tc:O(n),O(n).
