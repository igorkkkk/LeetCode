#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
#include <iterator>
#include <iomanip>
#include <chrono>



struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        return middleNoteRecurse(head,head);
    }
    ListNode* middleNoteRecurse(ListNode*& middle,ListNode*& last){
        if(last&&last->next){
            return middleNoteRecurse(middle->next,last->next->next);
        }
        return middle;
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
    std::cout<<"\n"<<t.middleNode(temp)->val;
    return 0;
}
