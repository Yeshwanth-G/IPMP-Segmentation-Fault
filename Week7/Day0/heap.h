#include<iostream>
#include<vector>
using namespace std;
template<class T>
class Heap{
vector<T>v;
public :
void heapify(int i,int sz){//Time Complexity O(h)
int l=(2*i)+1;
int r=(2*i)+2;
int g=i;
if(l<sz&&v[l]>v[g])g=l;
if(r<sz&&v[r]>v[g])g=r;
if(g!=i){
swap(v[g],v[i]);
heapify(g,sz);
}
else return ;
}
bool empty(){//O(1)
    return v.empty();
}
int size(){//O(1)
    return v.size();
}
void push(T a){//O(logn)
v.push_back(a);
for(int i=v.size()-1;i>0;i=(i-1)/2){
    heapify(i,v.size());
}
heapify(0,v.size());
}
T top(){//O(1)
return v[0];
}
void pop(){//O(logn)
    swap(v[0],v.back());
    v.pop_back();
    heapify(0,v.size());
}
void print(){//O(n)
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
};
