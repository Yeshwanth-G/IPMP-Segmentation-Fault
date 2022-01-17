#include<iostream>
#include<unordered_map>
#include<math.h>
using namespace std;
//Approach :try for every pair of integers from 1 to n,whether sqrt(a^2+b^2)=c; 1<=c<=n;
//O(N^2),O(1)
int pythagorous(int n){
    int count=0;
   for(int i=1;i<=n;i++){
       for(int j=i;j<=n;j++){
           float a=sqrt(i*i+j*j);
           int b=sqrt(i*i+j*j);
        if(a==b&&a<=n)count++;
       }
   }
return count;
}
int main(){
int n;
cin>>n;
cout<<pythagorous(n);
return 0;
}
