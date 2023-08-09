/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        // creating copy of each node
        Node* fhead = head;
        while(fhead != NULL)
        {
            Node* temp = new Node(fhead -> val);
            temp -> next = fhead -> next;
            fhead -> next = temp;
            fhead = fhead -> next -> next;
        }
        
        //assign random pointer
        Node* rhead = head;
        while(rhead != NULL)
        {
            if(rhead -> random != NULL)
            {
                rhead -> next -> random = rhead -> random -> next;
            }
            rhead = rhead -> next -> next;
        }
        
        //break copy list from original list
        Node* dummy = new Node(0);
        rhead = head;
        fhead = dummy;
        Node* fast;
        while(rhead != NULL)
        {
            fast = rhead -> next -> next;
            fhead -> next = rhead -> next;
            rhead -> next = fast;
            fhead = fhead -> next;
            rhead = fast;
            
        }
        
        return dummy -> next;
    }
};