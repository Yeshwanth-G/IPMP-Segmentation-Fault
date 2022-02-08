#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node* npx;
Node(int d){
data=d;
npx=0;
}
};
Node* Xor(Node*a,Node*b){
    return (Node*)
        ((unsigned long long )(a)
        ^ (unsigned long long)(b));
}
void print(Node*p){
    Node*prev=NULL,*nxt;
while(p){
        cout<<p->data<<" ";
nxt=Xor(prev,p->npx);
prev=p;
p=nxt;
}
cout<<endl;
}
Node*deletee(Node*head,int a){
    int count=1;
    Node*cur=head,*prev=NULL,*nxt;
     while(cur&&count<a){
        nxt=Xor(prev,cur->npx);
        prev=cur;
        cur=nxt;
        count++;
    }
  if(a==1){
   head=head->npx;
   return head;
  }
  nxt=Xor(cur->npx,prev);
  prev->npx=Xor(prev->npx,Xor(cur,nxt));
  if(nxt)nxt->npx=Xor(nxt->npx,Xor(cur,prev));
return head;
}
Node*insert(Node*head,int a,int d){//5 4 4 8 9
    int count=1;
    Node*cur=head,*prev=NULL,*nxt;
    while(cur&&count<=a){
        nxt=Xor(prev,cur->npx);
        prev=cur;
        cur=nxt;
        count++;
    }
    Node*s=new Node(d);
    s->npx=Xor(cur,prev);
    if(!head)return s;
    if(cur)cur->npx=Xor(Xor(prev,cur->npx),s);
    prev->npx=Xor(Xor(cur,prev->npx),s);
    return head;
}
Node* insert(Node*head,int d){
Node*prev=NULL,*nxt,*curr=head;
while(curr){
nxt=Xor(prev,curr->npx);
prev=curr;
curr=nxt;
}
Node*s=new Node(d);
s->npx=prev;
if(!head)return s;
prev->npx=Xor(prev->npx,s);
return head;
}
int main(){
Node *head=NULL;
head=insert(head,5);
head=insert(head,8);
head=insert(head,9);
print(head);
head=insert(head,2,4);
head=insert(head,2,4); 
head=insert(head,5,4);
print(head);
head=deletee(head,6);
print(head);
return 0;
}
