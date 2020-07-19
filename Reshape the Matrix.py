class Solution:
    def matrixReshape(self, nums: List[List[int]], r: int, c: int) -> List[List[int]]:
        temp=[]
        for n in nums:
            temp.extend(n)
        if len(temp)!=r*c:
            return nums
        nums=[[] for i in range(r)]
        
        for i in range(len(temp)):
            ri = i//c
            nums[ri].append(temp[i])
        
        return nums
