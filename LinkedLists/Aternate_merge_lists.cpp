void mergeList(struct Node **a, struct Node **b)
{
  O(length of *a)
    struct Node*p=*a,*q=*b ;
     while(p!=NULL&&q){
         if(q){
             Node*s=q->next;
             Node*r=p->next;
             q->next=p->next;
             p->next=q;
             q=s;
             p=r;
         }
         
     }
     *b=q;
}
