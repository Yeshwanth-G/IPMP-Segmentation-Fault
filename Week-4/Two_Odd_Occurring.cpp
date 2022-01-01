#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
void oddOccur(vector<int>v){
//Approach-1:push elemnets of vector into hashmap and before pushing a element check if its already present,
// if its present delete it from map else push it into the map-finally hashmap contains odd cocuring elements;-O(n),O(n)
//     unordered_map<int,int>hmap;
// for(int i=0;i<v.size();i++){
// if(hmap.empty()||hmap.find(v[i])==hmap.end())
// hmap[v[i]];
// else{
//     hmap.erase(v[i]);
// }
// }
// for(auto i=hmap.begin();i!=hmap.end();i++){
// cout<<i->first<<endl;
// }
//Approach-2-BitManipulation
//find xor of all elements,final xor has the Xor value of the odd occuring elements from xor value 
//we can extract the oringinal values.
int x,a=0,b=0;
for(int i=0;i<v.size();i++){
x=x^v[i];
}
//Now for a bit in xor to be 1,the orignal bits should be different,so if we can get a set bit in the xor value and 
//find xor of all values having that bit 0 and xor of all values having that bit 1 will give the original values;
int s=x&~(x-1);//will give the rightmost '1' position-O(n),O(1);
for(int i=0;i<v.size();i++){
    if(v[i]&s){
    a=a^v[i];
    }
    else b=b^v[i];
}
cout<<a<<" "<<b<<endl;
}
int main(){
vector<int>v;
int n,d;
cin>>n;
for(int i=0;i<n;i++){
cin>>d;
v.push_back(d);
}
oddOccur(v);
return 0;
}
