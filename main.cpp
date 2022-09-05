#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    };
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        return isPalindromeRecurse(head,head);
    }
    bool isPalindromeRecurse(ListNode*& head, ListNode* comp){
        if(!comp){
            return true;
        }
        bool pal = isPalindromeRecurse(head, comp->next);

        if(head->val != comp->val){
            return false;
        }
        else {
        head = head->next;
        return pal;
    }

};

int main(int argc, const char * argv[]) {
    Solution t;

    ListNode one =  ListNode(1);
    ListNode two = ListNode(2);
    ListNode three = ListNode(3);
    ListNode four = ListNode(2);
    ListNode five = ListNode(1);


    five.next = NULL;
    one.next = &two;
    two.next = &three;
    three.next = &four;
    four.next = &five;
    ListNode* temp = &one;
    std::cout <<t.isPalindrome(temp);
    return 0;
}
