/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
//         ListNode* d1 = headA;
//     ListNode* d2 = headB;
    
//     while(d1 != d2) {
//         d1 = d1 == NULL? headB:d1->next;
//         d2 = d2 == NULL? headA:d2->next;
//     }
    
//     return d1;
//     }
        
        unordered_set<ListNode*> st;
        while(head1 != NULL) {
           st.insert(head1);
           head1 = head1->next;
        }
        while(head2 != NULL) {
            if(st.find(head2) != st.end()) return head2;
            head2 = head2->next;
        }
        return NULL;
    }
};