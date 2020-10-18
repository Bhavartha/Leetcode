class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        ans=[]
        def backtracker(nums,curr):
            if not nums:
                ans.append(curr)
            for n in range(len(nums)):
                _ = nums[:n]+nums[n+1:]
                backtracker(_,curr+[nums[n]])            
        backtracker(nums,[])        
        return ans
