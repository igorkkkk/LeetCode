/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* current;

    while(head && head->val == val)
        head = head->next;
    
    current = head;
    while(current && current->next)
        if(current->next->val == val)
            current->next = current->next->next;
        else
            current = current->next;

    return head;
}