/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* second = head;
    while(second && second->next) {
        head = head->next;
        second = second->next->next;
        if(second == head)
            return true;
    }
    return false;
}