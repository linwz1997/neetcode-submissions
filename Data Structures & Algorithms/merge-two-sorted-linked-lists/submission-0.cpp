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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode *dummy = new ListNode(0);
        ListNode *p1 = list1;
        ListNode *p2 = list2;
        ListNode *q = dummy;
        while (p1 && p2)
        {
            if (p1->val < p2->val)
            {
                q->next = p1;
                p1 = p1->next;
            }
            else
            {
                q->next = p2;
                p2 = p2->next;
            }

            q = q->next;
        }    

        if (p1)
        {
            q->next = p1;
        }

        if (p2)
        {
            q->next = p2;
        }
        return dummy->next;
    }

    
};
