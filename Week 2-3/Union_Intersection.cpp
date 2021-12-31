#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// bool ispresent(vector<int>&v,int a){
//     if(v.empty())return false;
//     return binary_search(v.begin(),v.end(),a);
// }
void unionn_intersection(vector<int>v1,vector<int>v2){
    //Approach-1:iterate thorough each vector and keep on adding its elements into answer vector if it is not alreday present.
    //time:if ispresent() takes O(N)-linera search-->(m+n)log(m+n)
    vector<int>unin,inter;
// for(int i=0;i<v1.size();i++){
//     if(!ispresent(unin,v1[i]))
//     { unin.push_back(v1[i]);
// }
// }
// for(int i=0;i<v2.size();i++){
//     if(!ispresent(unin,v2[i])){
//     unin.push_back(v2[i]);
// }
// }
//Approach-2:Two pointer approach for sorted arrays-O(m+n)
int ptr1=0,ptr2=0;
while(ptr1<v1.size()&&ptr2<v2.size()){
    if(v1[ptr1]<v2[ptr2]){
       if(unin.empty()||unin.back()!=v1[ptr1]) unin.push_back(v1[ptr1]);
    ptr1++;    
    }
    else if(v2[ptr2]<v1[ptr1]){
       if(unin.empty()||unin.back()!=v2[ptr2]) unin.push_back(v2[ptr2]);
        ptr2++;
    }
    else {
       if(unin.empty()||unin.back()!=v2[ptr2]) 
       {
           unin.push_back(v1[ptr1]);
           inter.push_back(v1[ptr1]);
       }
         ptr1++;
         ptr2++;
    }
}
while(ptr1<v1.size()){
if(unin.empty()||unin.back()!=v1[ptr1])unin.push_back(v1[ptr1]);
ptr1++;
}
while(ptr2<v2.size()){
if(unin.empty()||unin.back()!=v2[ptr2])unin.push_back(v2[ptr2]);
ptr2++;
}
for(int i=0;i<unin.size();i++){
    cout<<unin[i]<<" ";
}
cout<<endl;
for(int i=0;i<inter.size();i++){
    cout<<inter[i]<<" ";
}
}
int main(){
vector<int>v1,v2;
int m,n;
cin>>n>>m;
int d;
for(int i=0;i<n;i++){
    cin>>d;
    v1.push_back(d);
}
for(int j=0;j<m;j++){
    cin>>d;
    v2.push_back(d);
}
vector<int>unin,inter;
unionn_intersection(v1,v2);
return 0;
}
