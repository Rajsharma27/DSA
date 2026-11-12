# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverseList(self, head: ListNode | None) -> ListNode | None:
        p = None
        q = None
        temp = head

        while temp!=None:
            q=p
            p=temp
            temp = temp.next
            p.next = q
        
        return p