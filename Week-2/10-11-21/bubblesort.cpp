#include<bits/stdc++.h>
using namespace std;
int main(){
//Approach:iterate through the array and each time compare the adacant elements and swap them if required.
//Time:Best case(already sorted array)-O(n),worst case(array in descending order)-O(n^2).
int n,temp;
vector<int>v;
cin>>n;
v.resize(n);
for(int i=0;i<n;i++)
cin>>v[i];
bool inorder;
for(int i=0;i<n-1;i++){
    inorder=false;
    for(int j=0;j<n-(i+1);j++){
        if(v[j]>v[j+1]){
            temp=v[j];
            v[j]=v[j+1];
            v[j+1]=temp;
            inorder=true;
        }
    }
    if(inorder==false)
    break;
}
for(int i=0;i<n;i++)
cout<<v[i]<<" ";
return 0;
}