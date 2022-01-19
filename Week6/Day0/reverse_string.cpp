#include<iostream>
#include<unordered_map>
#include<math.h>
#include<algorithm>

using namespace std;
//Approach :we can have two pointers at start and end,we can swap the characters at them intially and then
//increase start pointer and decrease end pointer and do the same swapping recursively;
//time:O(N)->t(n)=t(n-1)+c,
//space:O(N)->recursion stack
void reverse(string&s,int a,int b){
if(a>=b)return;
swap(s[a],s[b]);
reverse(s,a+1,b-1); 
}
int main(){
string s;
cin>>s;
reverse(s,0,s.length()-1);
cout<<s;
return 0;
}
