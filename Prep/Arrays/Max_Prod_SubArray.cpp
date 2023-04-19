long long maxProduct(vector<int> arr, int n) {
	    long long mxp=0,mnp=0,maxprod=0;
	    if(n==1)return arr[0];
	    for(int i=0;i<n;i++){
	        if(arr[i]<0){
	            if(mxp==0)mxp=1;
	            long long temp=mnp;
	            mnp=mxp*arr[i];
	            mxp=temp*arr[i];
	        }else if(arr[i]>0){
	            if(mxp==0)mxp=1;
	            mxp=mxp*arr[i];
	            mnp=mnp*arr[i];
	        }else{
	            mnp=0;
	            mxp=0;
	        }
	        maxprod=max(maxprod,mxp);
	    }
	    return maxprod;
	}
//at every stage if we could maintain maximum positive prod and taking max among all gives answer....
//for that we need to maintain mnp and mxp.....;
