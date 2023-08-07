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
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode *fast = head;
        ListNode *slow = head;
        do
        {
            if(fast == NULL || fast->next == NULL)
            return NULL;
            fast = fast->next->next;
            slow = slow->next;
        }while(fast != slow);
        slow = head;
        while(fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }
        return slow;
        
//         unordered_set<ListNode*> st;
//         ListNode* i = head;

//         while (i != NULL) 
//         {
//             if (st.find(i) != st.end()) 
//             {
//                 break;
//             }
//             st.insert(i);
//             i = i->next;
//         }
//         return i;
    }
};