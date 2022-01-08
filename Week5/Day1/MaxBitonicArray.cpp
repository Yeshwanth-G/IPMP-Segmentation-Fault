class Solution{
public:	
//Approach:Maintain two arrays one to store the length of increasing array ending at that point
//and the other to store length of decreasing array starting at that point
//  and then iterate arrays simultaneously to find bitonic length;
//O(N),O(1)
	int bitonic(vector<int> arr, int n) {
	    // code here
	    int in[n],de[n];
	    in[0]=1;
	    de[n-1]=1;
	    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1])in[i]=in[i-1]+1;
        else in[i]=1;
	}
	for(int i=n-2;i>=0;i--){
	    if(arr[i+1]<=arr[i])de[i]=de[i+1]+1;
	    else de[i]=1;
	}
	int max=INT_MIN;
	for(int i=0;i<n;i++){
	    int s=in[i]+de[i]-1;
	    if(s>max)max=s;
	}
	return max;
}};
