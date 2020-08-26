class NumArray:
    n=[]
    def __init__(self, nums: List[int]):
        self.n=nums

    def update(self, i: int, val: int) -> None:
        self.n[i]=val

    def sumRange(self, i: int, j: int) -> int:
        return sum(self.n[i:j+1])


# Your NumArray object will be instantiated and called as such:
# obj = NumArray(nums)
# obj.update(i,val)
# param_2 = obj.sumRange(i,j)
