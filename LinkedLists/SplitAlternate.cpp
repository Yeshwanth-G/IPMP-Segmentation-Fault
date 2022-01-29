
void alternatingSplitList(struct Node* head) 
{
  //O(n),O(n/2);
    Node*p=head,*s=NULL;
    while(p&&p->next){
    Node*r=p->next;
    p->next=p->next->next;
    r->next=NULL;
    if(s==NULL){s=r;
        b=r;
    }
    else{
        s->next=r;
        s=r;
    }
    p=p->next;
    }
    a=head;
}
