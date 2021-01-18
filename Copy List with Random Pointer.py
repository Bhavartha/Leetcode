"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""

class Solution:
    def copyRandomList(self, og: 'Node') -> 'Node':
        
        if not og:
            return og
        
        head = og
        while head:
            t = Node(head.val,head.next,head.random)
            head.next = t
            head = t.next
            
        head = og.next
        while head:
            if head.random:
                head.random = head.random.next
            if head.next:
                head.next = head.next.next
            head = head.next
         
        return og.next
        
