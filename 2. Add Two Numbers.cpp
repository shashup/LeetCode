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
        int c=0,s=0;
        ListNode* res= NULL, *t=res;
        while(l1 || l2)
        {
            int v=(l1 ? l1->val : 0) + (l2 ? l2->val : 0) + c;
            s=v%10; c=v/10;
            ListNode* tmp=new ListNode(s);
            if(res)
            {
                t->next = tmp; t=tmp;
            }
            else
            {
                t=res=tmp;
            }
            //t=tmp; //(this is common but still not clubbing for conceptual clariry)
            l1 = l1 ? l1->next : NULL;
            l2 = l2 ? l2->next : NULL;
        }
        t->next = c ? new ListNode(c) : NULL;
        return res;
    }
};
