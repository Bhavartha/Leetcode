"""
# Definition for Employee.
class Employee:
    def __init__(self, id: int, importance: int, subordinates: List[int]):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates
"""

class Solution:
    def getImportance(self, employees: List['Employee'], id: int) -> int:
        e_imp= dict()
        e_sub = dict()
        for e in employees:
            e_imp[e.id] = e.importance
            e_sub[e.id] = e.subordinates
        ans = e_imp[id]
        q = e_sub[id]
        for i in q:
            ans+=e_imp[i]
            q+= e_sub[i]
        return ans
