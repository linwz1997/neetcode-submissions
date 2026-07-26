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
    void revList(ListNode **node)
    {
        ListNode *p = *node;
        ListNode *q = NULL;
        ListNode *r = NULL;

        while (p)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }

        *node = q;
    }

    void reorderList(ListNode* head) 
    {
        if (!head || !head->next)
        {
            return;
        }    

        // Find the head of the second half list
        ListNode *s = head;
        ListNode *f = head->next;
        while (f && f->next)
        {
            s = s->next;
            f = f->next->next;
        }

        // Cut off the first and second half of the list
        // so if the original list is 1->2->3->4->5->x
        // then now is 1->2->3->x / 4->5->x
        ListNode *secHalfHead = s->next;
        s->next = NULL;

        // Reverse the second half of the list
        revList(&secHalfHead);

        // Merge the first part and the reversed second half part
        ListNode *pt1 = head;
        ListNode *pt2 = secHalfHead;
        while (pt2)
        {
            ListNode *tmp1 = pt1->next;
            ListNode *tmp2 = pt2->next;
            pt1->next = pt2;
            pt2->next = tmp1;
            pt1 = tmp1;
            pt2 = tmp2;
        }
    }
};
