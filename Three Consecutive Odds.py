class Solution:
    def threeConsecutiveOdds(self, arr: List[int]) -> bool:
        oc=0
        for a in arr:
            if a&1:
                oc+=1
                if oc==3:
                    return True
            else:
                oc=0
        return False
