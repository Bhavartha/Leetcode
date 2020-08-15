class Solution:
    def numJewelsInStones(self, J: str, S: str) -> int:
        ans=0
        for _ in S:
            if _ in J:
                ans+=1
        return ans
