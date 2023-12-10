/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    struct ListNode* middle = head;
    int arr[50001];
    int i = 0;

    while (head && head->next) {
        arr[i] = middle->val;
        middle = middle->next;
        head = head->next->next;
        i++;
    }
    if (head != NULL)
        middle = middle->next;
    
    while (middle != NULL) {
        if (i-1 >= 0 && arr[i-1] != middle->val)
            return false;
        middle = middle->next;
        i--;
    }
    return true;
}