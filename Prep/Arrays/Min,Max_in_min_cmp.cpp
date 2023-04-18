pair<int,int> answer(int A[],int st,int e){
       if(st==e)return {A[st],A[e]};
       if(e-st==1){
           if(A[st]>A[e])return {A[e],A[st]};
           return {A[st],A[e]};
       }
       int mid=(st+e)/2;
       pair<int,int>l=answer(A,st,mid);
       pair<int,int>r=answer(A,mid+1,e);
       pair<int,int>p;
       p.first=min(l.first,r.first);
       p.second=max(l.second,r.second);
       return p;
   }
    int findSum(int A[], int N)
    {
    	pair<int,int>p=answer(A,0,N-1);
    	return p.second+p.first;
    	//T(n)=T(n/2)*2+(2);
      //T(2)=1,T(1)=0;
      if(n is power of 2)
      T(2^k+1)=2+4+8+16+....+2^k+(2^k*T(n/2^k))=(2+4+8+16+....(n/2)+(n/2))=(3n/2)-2;
    }
--------------------------------------------------------------------------------------------------------
  //User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int mx,mn,i=0,n=N;
    	if(n%2==0){
    	    if(A[0]>A[1]){
    	        mx=A[0];
    	        mn=A[1];
    	    }else{
    	        mx=A[1];
    	        mn=A[0];
    	    }
    	    i=2;
    	}else{
    	    mx=A[0];
    	    mn=A[0];
    	    i=1;
    	}
    	for(;i<n-1;i++){
    	    if(A[i]>A[i+1]){
    	        if(A[i]>mx)mx=A[i];
    	        if(A[i+1]<mn)mn=A[i+1];
    	    }else{
    	        if(A[i+1]>mx)mx=A[i+1];
    	        if(A[i]<mn)mn=A[i];
    	    }
    	}
    	return mx+mn;
    }
        	//if(n even)-1+(3*(n-2))/2; comparisions;
    	//else (3*(n-1)/2); comparisions
};
