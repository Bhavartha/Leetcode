# Definition for singly-linked list.
class ListNode:
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        ans=ListNode(None)
        t=ans
        while l1 != None and l2 != None:
            if l1.val<l2.val:
                ans.next=l1
                l1=l1.next
            else:
                ans.next=l2
                l2=l2.next
            ans=ans.next
        if l1 != None:
            ans.next=l1
        elif l2 != None:
            ans.next=l2
        return t.next
