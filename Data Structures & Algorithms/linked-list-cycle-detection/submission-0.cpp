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
    bool hasCycle(ListNode* head) 
    { 
        if (!head || !head->next)
        {
            return false;
        }

        ListNode *i = head;
        ListNode *j = head->next;

        while (j && j->next)    
        { 
            if (i == j)
            {
                return true;
            }
            i = i->next;
            j = j->next->next;
        }

        return false;
    }
};
