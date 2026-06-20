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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB) 
        return nullptr;
        
        ListNode *a = headA;
        ListNode *b = headB;
        
        // Traverse both lists
        while (a != b) {
            a = a == NULL ? headB : a->next;
            b = b == NULL ? headA : b->next;
        }
        
        // Either intersection node or nullptr
        return a;
    }
};

//Iteration 5
// a = NULL
// b = 5

// as a == null then headB i.e. 5 will be given to a
// Since b == NULL:

// b = headA;
// a = 6
// b = 4
