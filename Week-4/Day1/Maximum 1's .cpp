
//Approach-1:Iterate through each column to find which row has first occuernece of 1;=>O(n*m) 	
// int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
// 	    // code here
// 	    for(int j=0;j<m;j++){
// 	        for(int i=0;i<n;i++){
// 	            if(arr[i][j]==1)return i;
// 	        }
// 	    }
// 	    return -1;
// 	}
//Approach-2:Using binary search in each row find the poistion of first 1 and from that get row with max. 1's==>O(nlogm);
int finder(vector<int>v,int s,int e){//Auxilary function for binary search
    int mid=(s+e)/2;
    while(s<=e){
        mid=(s+e)/2;
        if(v[mid]==0){
            s=mid+1;
        }
        else if(v[mid]==1&&v[mid-1]==1)
        e=mid-1;
        else{
            return mid;
        }
    }
        return -1;
}
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	   // for(int j=0;j<m;j++){
	   int max=-1,maxi=-1;
	        for(int i=0;i<n;i++){
	           int x=finder(arr[i],0,m-1);
	           x=m-x;
	           if(x!=m+1){
	               if(x>max){
	               max=x;
	                   maxi=i;
	               }
	           }
	        }
	    
	    return maxi;
	}
