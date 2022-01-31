class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode*p=head,*s=head,*r;
        int count=1;
        while(p&&s){
            if(count>k){
                s=s->next;
            }
            if(count==k){
                r=p;
            }
            p=p->next;
            count++;
        }
        swap(r->val,s->val);
    return head;
    }
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        int n=0;
        ListNode*p=head;
        while(p){
           p=p->next;
            n++;
        }
        cout<<n<<endl;
        p=head;
        int count=1;
        ListNode*s=NULL,*t=NULL;
        while(p){
            if(count==k){
                s=p;
            }
            if(count==n-k+1){
               t=p; 
            }
            count++;
            p=p->next;
        }
        swap(s->val,t->val);
        return head;
    }
};
