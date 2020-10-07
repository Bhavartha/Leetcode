class Solution:
    def specialArray(self, nums: List[int]) -> int:
        for i in range(1,len(nums)+1):
            if i==len([_ for _ in nums if _>=i]):
                return i
        return -1
