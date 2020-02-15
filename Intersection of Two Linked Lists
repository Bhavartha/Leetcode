# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:
        la=0
        pA=headA
        while headA!=None:
            la+=1
            headA=headA.next
        lb=0
        pB=headB
        while headB!=None:
            lb+=1
            headB=headB.next
        headA=pA
        headB=pB
        if la>lb:
            for i in range(la-lb):
                headA=headA.next
        elif lb>la:
            for i in range(lb-la):
                headB=headB.next
        while headA is not headB:
            headA=headA.next
            headB=headB.next
            
        return headA
