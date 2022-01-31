class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*s=head->next;
        head->next=swapPairs(s->next);
        s->next=head;
        return s;
    }
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL)return head;
        ListNode*p=head;
        ListNode*s=p->next;//s=5...2->1->4->3->NULL
        p->next=p->next->next;
        s->next=p;
        head=s;
        while(p&&p->next&&p->next->next){
         s=p->next;
        p->next=p->next->next;
        s->next=p->next->next;
        p->next->next=s;
        p=p->next;
        p=p->next;
        }
        return head;
    }
};
