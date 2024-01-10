# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeElements(self, head: Optional[ListNode], val: int) -> Optional[ListNode]:
        if not head:
            return
        while head is not None and head.val == val:
            head = head.next

        start = head
        while start and start.next:
            if start.next.val == val:
                start.next = start.next.next
            else:
                start = start.next
        
        return head

        