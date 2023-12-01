/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    struct ListNode * itA = headA;
    struct ListNode * itB = headB;
    
    while (itA || itB) {
        if (itA == itB)
            return itA;
        
        itA = itA ? itA->next : headB;
        itB = itB ? itB->next : headA;
    }
    return itA;
}