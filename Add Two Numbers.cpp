/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans= new ListNode();
        ListNode* i = ans;
        ListNode* p = l1;
        ListNode* q = l2;
        int c=0;
        while(p!=NULL || q!=NULL){
            int n1 = p!=NULL?p->val:0;
            int n2 = q!=NULL?q->val:0;
            int s = n1+n2+c;
            c=s/10;
            s=s%10;
            i->next = new ListNode(s);
            i = i->next;
            if(p) p=p->next;
            if(q) q=q->next;
        }
        if(c>0)  i->next=new ListNode(c);
        return ans->next;
    }
};
