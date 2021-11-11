#include<bits/stdc++.h>
using namespace std;
int main(){
//Approach:We will traverse the array and find minimum element in the array behind that vertex and swap with our index vertex;
//Time:O(n^2) in both worst and best cases.
    int n;
    cin>>n;
vector<int>v(n);
int min,minind,temp;
for(int i=0;i<n;i++)cin>>v[i];
for(int i=0;i<n-1;i++){
    min=v[i];
    minind=i;
    for(int j=i+1;j<n;j++){
    if(v[j]<min){
        min=v[j];
        minind=j;
    }
    }
    temp=v[i];
    v[i]=v[minind];
    v[minind]=temp;
}
for(int i=0;i<n;i++)cout<<v[i]<<" ";
return 0;
}