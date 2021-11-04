#include<bits/stdc++.h>
using namespace std;
namespace llist{
struct node{
    int data;
    node* next;
    node(int a){
        data=a;next=nullptr;
    }
};//structure fore each node in linked list;
class linkedlist{
    public:
    node* head;
    linkedlist(){
        head=nullptr;  }
    void createlist(vector<int>v);
    void printlist();
    void insert(int data);
    void deletenode(int pos);
    int length();
    bool search(int a);
    void deletelist();
    int MiddleElement();
    void PrintRev();
    void reverse();
void Print_Nth_Node_From_End(int n);
};}//class to implement linkedlist
void llist::linkedlist::createlist(vector<int>v){
    if(v.empty())return;
   head=new node(v[0]);
   node* prev=head;
for(int i=1;i<v.size();i++){
node* temp=new node(v[i]);
prev->next=temp;
prev=temp;
}
}//creates a new linked list with by taking a vector of elements.//Time,space:O(vector size)
void llist::linkedlist::printlist()
{   node*p=head;
    while(p!=nullptr){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;

}//prints given sigular linked list;Time:O(no. of elements in list),space:O(1)
void llist::linkedlist::insert(int data){
    node*p=head;
    while(p&&p->next!=nullptr){
        p=p->next;
    }
    node*temp=new node(data);
    if(p!=nullptr) p->next=temp;
    else p=temp;
}//inserts at the end of list:time:O(length of linkedlist),space:O(1)
void llist::linkedlist::deletenode(int pos){
    node*p=head;
    pos--;
for(int i=1;i<pos;i++)
p=p->next;
if(pos!=0){
    node*temp=p->next;
    p->next=p->next->next;
    delete(temp);

}
else{
    node*temp=head;
    head=head->next;
    delete(temp);
    }
}//deletes node at given position:time:O(n),space:O(1);
int llist::linkedlist::length(){
    int count=0;
    node*p=head;
    while(p!=nullptr){
        count++;
        p=p->next;
    }
    return count;
}//No. of elements in linkedlist,Time:O(n),space:O(1)
bool llist::linkedlist::search(int a){
    node*p=head;
    while(p!=nullptr&&p->data!=a){
        p=p->next;
    }
    if(p==nullptr) return false;
    return true;
}//searches for given integer:Time:O(n),space:O(1)
void llist::linkedlist::deletelist(){
node*prev=head;
if(head!=nullptr) head=head->next;
while(head!=nullptr){
    delete(prev);
    prev=head;
    head=head->next;
}
delete(prev);
head=nullptr;
}//deletes entire linkedlist:Time-O(n),space-O(1)
int llist::linkedlist::MiddleElement(){
    node*p=head;
//Approach 1-Traverse the linked list for node at length/2 position;-Time:O(length),space-O(1)
// for(int i=0;i<length()/2;i++){
// p=p->next;
// }
// if(p!=nullptr) return p->data;
//Approach-2:Using fast and slow pointer approach-Incremnet fast pointer by 2 nodes and slow pointer by 1 node,
//by the time when fast pointer reaches end of list slow pointer will reach middle of node-Time:O(n),space:O(1)
// node*fast=head,*slow=head;
// while(slow && fast){
//     fast=fast->next->next;
//     slow=slow->next;
// }
// if(slow!=nullptr) return slow->data;
// return 0;
//Approach 3-Increment pointer only if counter is odd;-T:O(n),Sp:O(1)
node*temp=head;
int count=0;
while(p!=nullptr){
if(count%2!=0)
temp=temp->next;
count++;
p=p->next;
}
if(temp!=nullptr) return temp->data;
return 0;
}
//Auxilary function for recursion purpose
void prev(llist::node*h){
    if(h!=nullptr){
        prev(h->next);
        cout<<h->data<<" ";
    }
}
void llist::linkedlist::PrintRev(){
//Approach-0:Traverse the list push nodes into stack and then traverse stack and print one by one-Time:O(n),space-O(n).
// stack<int>st;
// node*p=head;
// while(p!=nullptr){
//     st.push(p->data);
//     p=p->next;
// }
// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }
// cout<<endl;'
//Approach-1:Using Recursion,traversing whole list...Time:O(n),space-O(1)..if we consider internal stack used for recursion then space:O(n)
prev(head);
cout<<endl;
}
void llist::linkedlist::reverse(){//Time:O(n),space:O(1)
    node*prev=NULL,*current=head,*temp;
    while(current!=NULL){
        temp=current->next;
        current->next=prev;
        prev=current;
        current=temp;

    }
    head=prev;
}
void llist::linkedlist::Print_Nth_Node_From_End(int n){
     //Approach-0:get the length and traverse to get l-n+1 node from begining.Time:O(no. of nodes),space:O(1)
    // int l=llist::linkedlist::length();
    // node*p=head;
    // if(n>l)return;
    // for(int i=1;i<l-n+1;i++){
    //     p=p->next;
    // }
    // cout<<p->data<<endl;
    //Approach-1:First move a temp pointer by n nodes from begining and then start moving two pointers one from head by the time 
    //temp pointer reaches end head pointer reaches l-n+1 node.Time:O(no. of nodes).
    node*p=head,*temp=head;
    for(int i=1;i<n;i++){
        p=p->next;
    }
    while(p->next!=NULL){
        p=p->next;
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
