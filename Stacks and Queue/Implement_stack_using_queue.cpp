#include<iostream>
#include<vector>
#include<cmath>
#include<map>
#include<algorithm>
#include<queue>
#include<unordered_map>
#define int long long
using namespace std;
//Using two queues-----------------------------------
class stack{
queue<int>q1,q2;
public:
void push(int x){
q1.push(x);
while(q1.size()!=1){
  q2.push(q1.front());
  q1.pop();
}
while(!q2.empty()){
  q1.push(q2.front());
  q2.pop();
}
}
int pop(){
int x=q1.front();
q1.pop();
return x;
}
};
//Using single queue---------------------------------
class stack1{
queue<int>q;
public:
void push(int x){
q.push(x);
int size=q.size();
while(size>1){
  size--;
  q.push(q.front());
  q.pop();
}
}
int pop(){
  int x=q.front();
q.pop();
return x;
}
};
int32_t main(){
    stack s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    cout<<s1.pop()<<endl;
    stack1 s2;
    s2.push(4);
    s2.push(5);
    s2.push(6);
    cout<<s2.pop()<<endl;
    return 0;
}
