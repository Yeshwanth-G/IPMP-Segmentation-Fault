int majority_element(vector<int>v,int x){
//Approach 1: linear search-O(n),O(1)
//Approach 2:Binary search to find first occurence of number and check if n/2 + index is also x;
//O(logn),O(1)
int s=0,e=v.size()-1,mid,ans=-1,n=v.size();
while(s<=e){
mid=(s+e)/2;
if(v[mid]==x){
  ans=mid;
  cout<<v[mid]<<endl;
e=mid-1;
}
else 
if(v[mid]<x){
s=mid+1;
}
else {
e=mid-1;
}
}
if(v[(n/2)+ans]==x)return true;
return false;
//Approach 3:The majority element will defintely be present at middle if it exits,
//so comparing x with middle element would give answer;-O(1),O(1)
// int mid=v.size()/2;
// return v[mid]==x;
}
