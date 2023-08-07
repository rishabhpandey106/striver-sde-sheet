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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* dummy = new ListNode(0);
        dummy -> next = head;
        ListNode* pre = dummy;
        ListNode* current = dummy;
        ListNode* currnext = dummy;
        int count = 0;
        ListNode* c = dummy;
        while(c -> next != NULL)
        {
            c = c -> next;
            count++;
        }
        while(count >= k)
        {
            current = pre -> next;
            currnext = current -> next;
            for(int i=1;i<k;i++)
            {
                current -> next = currnext -> next;
                currnext -> next = pre -> next;
                pre -> next = currnext;
                currnext = current -> next;
            }
            pre = current;
            count -= k;
        }
        return dummy -> next;
    }
};