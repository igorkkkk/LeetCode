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

#include <stack>
class Solution {
public:

    int pairSum(ListNode* head) {
        stack<int> m_stack;
        int max = 0;
        ListNode* middle = head;
        ListNode* end = head;

        while(end && end->next){
            m_stack.push(middle->val);
            middle = middle->next;
            end = end->next->next;
            
        }
        
        while(middle){
            int sum = m_stack.top()+middle->val;
            max = max < sum ? sum : max;
            middle = middle->next;
            m_stack.pop();
        }
        return max;
    }
};