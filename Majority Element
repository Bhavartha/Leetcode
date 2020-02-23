class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ln=len(nums)
        d={}
        for n in nums:
            if n not in d:
                d[n]=1
            else:
                d[n]+=1
                if d[n]>ln//2:
                    return n
        for i in d.keys():
             if d[i]>ln//2:
                    return i



#OR

class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        return sorted(nums)[len(nums)//2]
