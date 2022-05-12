class twostacks{
int* arr;
int size;
int top1;
int top2;
twostacks(int n=100){
  size=n;
  top1=-1;
  top2=size;
  arr=new int[n];
}
void push1(int x){
if(top2-top1==1)return;
top1++;
arr[top1]=x;
}
void push2(int x){
if(top2-top1==1)return;
arr[++top2]=x;
}
int pop1(){
if(top1==-1)return -1;
int x=arr[top1]--;
return x;
}
int pop2(){
if(top2==size)return -1;
int x=arr[top2++];
return x;
}
};
