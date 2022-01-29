ListNode* Solution::solve(ListNode* A, int k) {
  //First reverse first k nodes then iterate further till k nodes then recursive apply the function.
  //Time:O(N),space:O(n)
    ListNode*current=A,*nxt,*prev=NULL;
    int count=0;
    while(current&&count<k){
        nxt=current->next;
       current->next=prev;
       prev=current;
       current=nxt;
       count++;
    }
   if(A!=nullptr){A->next=current;
   A=prev;}
   count=1;
   while(current&&count<k){
    current=current->next;
    count++;
   }
   if(current)current->next=solve(current->next,k);
   return A;
}
