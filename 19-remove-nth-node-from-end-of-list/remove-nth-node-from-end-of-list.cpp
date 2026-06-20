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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
    //     int count = 0;
    //     ListNode*temp = head;
    //     //count total no of listnodes
    //     while(temp){
    //       count ++;
    //       temp = temp->next;
    // }
    // count -=n;
    // if(count==0) {
    //     temp = head;
    //     head=head->next;
    //     delete temp;
    //     return head;
    // }
    // ListNode*curr = head , *prev =NULL;
    // while(count --){
    //     prev = curr;
    //     curr = curr->next;
    // }
    // prev->next = curr->next;
    // delete curr;
    // return head;

     ListNode* dummy = new ListNode(0, head);

        // Initialize slow and fast pointers at dummy
        ListNode* slow = dummy;
        ListNode* fast = dummy;
        // Move fast pointer N+1 steps ahead to create a gap
        for (int i = 0; i <= n; i++) {
            fast = fast->next;
        }
        // Move both pointers until fast reaches the end
        while (fast != NULL) {
            slow = slow->next;
            fast = fast->next;
        }
        // Slow is now at node before target → delete target node
        slow->next = slow->next->next;
        // Return updated head
        return dummy->next;
     }
};