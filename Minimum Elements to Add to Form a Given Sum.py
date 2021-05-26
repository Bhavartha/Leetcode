class Solution:
    def minElements(self, nums: List[int], limit: int, goal: int) -> int:
        s = sum(nums)
        a = abs(s-goal)
        return math.ceil(a/limit)
