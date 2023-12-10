/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//   stack = []
//         medium = head
//         while head and head.next:
//             stack.append(medium.val)
//             medium = medium.next
//             head = head.next.next
            
//         if head:
//             medium = medium.next
            
//         while medium:
//             if len(stack) and stack.pop()!=medium.val:
//                 return False
//             medium = medium.next
//         return True
bool isPalindrome(struct ListNode* head) {
    struct ListNode* middle = head;
    int arr[100000];
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