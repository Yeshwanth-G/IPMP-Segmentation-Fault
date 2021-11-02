#include<bits/stdc++.h>
#include "linkedlist.h"//including custom headerfile
using namespace std;
using namespace llist;//custom namespace
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
if(l.search(3))cout<<"Found 3!!";
else cout<<"Not Found 3!!";
l.deletelist();//deletes entire list and makes head as NULL;
return 0;
}
