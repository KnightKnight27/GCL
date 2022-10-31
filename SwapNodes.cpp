class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* p = head;
        while(p != NULL && p->next != NULL){
            if(p->next){
                swap(p->val,p->next->val);
            }
            p = p->next->next;
        }
        return head;
    }
};
