class Solution:
    def reformat(self, s: str) -> str:
        char = []
        nums = []
        for _ in s:
            if _.isnumeric():
                nums.append(_)
            else:
                char.append(_)
        ans = ""    
        
        if (not char and len(nums)==1) or (not nums and len(char)==1):
            return s
        if not char or not nums:
            return ans
        
        if len(char)==len(nums):
            for _ in range(len(nums)):
                ans+=char[_]+nums[_]
                
        elif len(char)-len(nums)==1:
            for _ in range(len(nums)):
                ans+=char[_]+nums[_]
            ans+=char[_+1]
            
        elif len(nums)-len(char)==1:
            for _ in range(len(char)):
                ans+=nums[_]+char[_]
            ans+=nums[_+1]
        return ans
