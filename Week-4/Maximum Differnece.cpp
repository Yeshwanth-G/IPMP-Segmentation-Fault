#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int maxd(vector<int>&v){
//Approach:Minimum so far approach....maintaing the minimum elementand maximium difference before given index;
//Time:O(n),space:O(1)
int min_so_far=v[0],mds=INT_MIN;
for(int i=1;i<v.size();i++){
if(v[i]<min_so_far){
    min_so_far=v[i];
}
else{
    if((v[i]-min_so_far)>mds)
    mds=v[i]-min_so_far;
}
}
return mds;
}
int main(){
     int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
    cin>>v[i];
    }
    cout<<maxd(v);
return 0;
}
