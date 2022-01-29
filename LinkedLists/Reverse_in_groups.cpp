
class Solution {
public:
    ListNode* reverse(ListNode*p){
        ListNode*current=p,*nxt,*prev=NULL;
        while(current){
            nxt=current->next;
            current->next=prev;
            prev=current;
            current=nxt;
        }
        return p;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {//time :O(n),space:O(n);
        ListNode*p=head,*q=head,*s;
        int count=1;
        while(p!=NULL){
            if(count==k){
                s=p->next;
                if(q==head)head=p;
                p->next=NULL;
                q=reverse(q);
                q->next=reverseKGroup(s,k);
                break;
            }
            count++;
            p=p->next;
        }
        return head;
    }
};
