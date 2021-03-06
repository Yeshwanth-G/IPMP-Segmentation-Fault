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
    linkedlist operator*(linkedlist l1){
        //Traversing both linked lists simultanoesly and finding the equivalent numbers then multiply them and 
        //construct a new linkedlist from the result.
        int sum1=0,sum2=0;
        node*p=this->head,*q=l1.head;
        while(p!=NULL||q!=nullptr){
        if(p!=NULL){ sum1=sum1*10+(p->data);
        p=p->next;}
        if(q!=NULL) {sum2=sum2*10+(q->data);
        q=q->next;}
    }
        int sum=sum1*sum2;
        linkedlist l2;
        while(sum!=0){//constructing new linked list from sum1*sum2;
            node*p=new node(sum%10);
            p->next=l2.head;
            l2.head=p;
            sum=sum/10;
        }
        return l2;
    }
    void createlist(vector<int>v);
    void printlist();
    void insert(int data);
    void deletenode(int pos);
    int  length();
    bool search(int a);
    void deletelist();
    int  MiddleElement();
    void PrintRev();
    void reverse();
void Print_Nth_Node_From_End(int n);
bool palindrome();
void intersection_node(linkedlist l2);
linkedlist intersection(linkedlist l1);
linkedlist Union(linkedlist l1);
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
int  llist::linkedlist::length(){
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
int  llist::linkedlist::MiddleElement(){
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
llist::node* reversehalf(llist::node*h){
llist::node*prev=NULL,*current=h,*nextn;
while(current){
nextn=current->next;
current->next=prev;
prev=current;
current=nextn;
}
h=prev;
return h;
}
bool llist::linkedlist::palindrome(){
// Approach-0: pushing all th e nodes into stack and then traversing stack to check if its palindrome:Time-O(n),space-O(n);
// stack<node*>st;
// node*t=head;
// while(t!=NULL){
//     st.push(t);
//     t=t->next;
// }
// t=head;
// while(!st.empty()){
//     if(st.top()->data!=t->data)
//     return false;
//     st.pop();
//     t=t->next;
// }
// return true;
//Approach-1:Go to middle element and reverse linkedlist from that node and then start comparing node values;Time:O(n),space-O(1)
node*fast=head,*slow=head,*prev=head,*c=head;
while(fast!=NULL&&fast->next!=NULL){
    prev=slow;
    slow=slow->next;
    fast=fast->next->next;
}
if(fast!=NULL){
    prev=slow;
slow=slow->next;
}
slow=reversehalf(slow);
prev->next=slow;
while(slow!=NULL||c!=prev){
if(c->data!=slow->data){
    prev->next=reversehalf(prev->next);
    return false;}
c=c->next;;
slow=slow->next;
}
prev->next=reversehalf(prev->next);
return true;
}
void llist::linkedlist::intersection_node(linkedlist l2){
    //BruteForce:Traverse second linked list for each node in first linked list-Time:O(m*n),space-O(1)
//     node*p=head,*q=l2.head;
//     while(p!=NULL){
//         while(q!=NULL){
//             if(p==q){
//             cout<<"Intersection at:"<<p->data<<endl;
//             return;}
//             q=q->next;
//         }
//         p=p->next;
//     }
// cout<<"Not Found!!\n";
// --------------------------------------------------------------------------------------------------------
//Approach-1:Calculate the length difference between two linked lists,then start both heads at same point and 
// then traverse to find intersection point;-Time:O(n+m)as intially to find length we need to completely traverse both lists,space-O(1)
// int len1=length();int len2=l2.length(),diff=0;
// llist::node*p=head,*q=l2.head;
// if(len1>len2)
// {
// for(int i=1;i<(len1-len2);i++){
//     p=p->next;
// }
// }
// else{
// for(int i=1;i<(len2-len1);i++){
//     q=q->next;
// }
// }
// while(p!=NULL&&q!=NULL){
//     if(p==q){
//             cout<<"Intersection at:"<<p->data<<endl;
//             return;}
//     p=p->next;
// q=q->next;
// }
// cout<<"Not Found!!\n";
// --------------------------------------------------------------------------------
//Aproach-2:keep on tarversing linked list until they are equal(both van be null also)..if one of pointer reaches null then point it back to head of other list
//Time:O(m+n),space-O(1);
node*p=head,*q=l2.head;
while(p!=q){
    if(p==NULL&&q!=NULL)p=l2.head;
    else if(q==NULL&&p!=NULL)q=head;
    else {p=p->next;
    q=q->next;}
}
if(p!=NULL)
cout<<"Intersection at:"<<p->data<<endl;
else
cout<<"Not Found!!"<<endl;
}
llist::linkedlist llist::linkedlist::Union(linkedlist l1){
//Approach-0:travere a linked list and for each element check its already present else insert it-Time:O(n*m),space-O(1);;
// linkedlist l2;
// l2.head=new node(head->data);
// node*p=NULL,*q;
// bool present;
// if(head!=NULL)p=head->next;
// while(p!=NULL){
//     present =false;
//     q=l2.head;
//     while(q!=NULL){
//         if(p->data==q->data)
//         present=true;
//         q=q->next;
//     }
//     if(present==false){
//         node*temp=new node(p->data);
// temp->next=l2.head;
// l2.head=temp;
//     }
// p=p->next;
// }
// p=l1.head;
// while(p!=NULL){
//     present =false;
//     q=l2.head;
//     while(q!=NULL){
//         if(p->data==q->data)
//         present=true;
//         q=q->next;
//     }
//     if(present==false){
//         node*temp=new node(p->data);
// temp->next=l2.head;
// l2.head=temp;
//     }
//     p=p->next;
// }
// return l2;
//Approach-1:Traverse a linkedlist push all its elements into hashmap,then traverse other 
// linked list and insert the union elements into the new list to be returned-Time-O(m+n),space-O(m);;
unordered_map<int,int>hmap;
node*p=head,*q=l1.head;
linkedlist answer;
while(p!=NULL){
    if(hmap.empty()||hmap.find(p->data)==hmap.end()){
     node*temp=new node(p->data);
     temp->next=answer.head;
     answer.head=temp;
     hmap[p->data];
    }
p=p->next;
}
while(q!=NULL){
   if(hmap.empty()||hmap.find(q->data)==hmap.end()){
     node*temp=new node(q->data);
     temp->next=answer.head;
     answer.head=temp;
     hmap[q->data];
    }
q=q->next;
}
return answer;
}
llist::linkedlist llist::linkedlist::intersection(linkedlist l1){
//Approach-1:We can follow same approches as we did for union,we can insert element to result
// linked list is its present in our running hashmap-Time-O(m+n),space-O(m);
unordered_map<int,int>hmap;
node*p=head,*q=l1.head;
linkedlist answer;
while(p!=NULL){
    hmap[p->data];
    p=p->next;
}
while(q!=NULL){
    if(hmap.find(q->data)!=hmap.end()){
     node*temp=new node(q->data);
     temp->next=answer.head;
     answer.head=temp;
    }
    q=q->next;
}
return answer;
}












