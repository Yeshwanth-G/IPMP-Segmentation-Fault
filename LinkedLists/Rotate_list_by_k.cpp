class Solution
{
    public:
//traverse till kth node,make its next null then traverse till tail and make its next head;
  Node* rotate(Node* head, int k)
    {
      int count=1;
      Node*h=head;
      while(h!=NULL){
          if(count==k)break;
          count++;
          h=h->next;
      }
      if(h==NULL||h->next==NULL)return head;//if k>=n
      Node*p=h->next;
      h->next=NULL;
      h=p;
      while(h&&h->next!=NULL){
          h=h->next;
      }
      if(h!=NULL){
          h->next=head;
      }
      head=p;
      return head;
    }
};
