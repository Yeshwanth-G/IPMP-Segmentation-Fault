#include<bits/stdc++.h>
#include "linkedlist.h"
using namespace std;
using namespace llist;
int main(){
linkedlist l;
vector<int>v={1,2,3,4,5};
l.createlist(v);//create a new linkedlist from vector elements
l.insert(6);//insert at the end of linked list
l.printlist();//print elemnts of linkedlist
l.insert(7);
l.printlist();
l.deletenode(2);//delete node at postion 2(given position)
l.printlist();
cout<<"Length="<<l.length()<<endl;
int a=10;
if(l.search(a))cout<<"Found "<<a<<endl;
else cout<<"Not Found "<<a<<endl;
cout<<"Middle element:"<<l.MiddleElement()<<endl;
cout<<"Reverse print without actual reversing:";
l.PrintRev();
l.reverse();
cout<<"reversed list:";
l.printlist();
l.deletelist();//deletes entire list and makes head as NULL;
return 0;
}
