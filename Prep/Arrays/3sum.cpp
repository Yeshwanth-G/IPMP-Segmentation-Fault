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
int find3Numbers(int A[], int n, int X)
{
    sort(A,A+n);
    for(int i=0;i<n;i++){
        if(twosum(A,i,n,X-A[i]))return 1;
    }
     return 0;
}

};//O(n^2),O(n)
----------------
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
int find3Numbers(int A[], int n, int X)
{
    sort(A,A+n);
    for(int i=0;i<n;i++){
        if(twosum(A,i,n,X-A[i]))return 1;
    }
     return 0;
}

};//O(nlogn+n^2),O(1)
