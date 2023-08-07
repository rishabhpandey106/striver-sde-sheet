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
    bool hasCycle(ListNode *head) {
    unordered_set<ListNode*> st;
    ListNode* i = head;
    
    while (i != NULL) {
        if (st.find(i) != st.end()) {
            return true;
        }
        st.insert(i);
        i = i->next;
    }
    
    return false;
}
};