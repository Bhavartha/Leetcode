class Solution:
    def canArrange(self, arr: List[int], k: int) -> bool:
        d = dict()
        for a in arr:
            e = a%k
            if e not in d: d[e]=1
            else: d[e]+=1
        for key,val in d.items():
            if key==0:
                if val&1:
                    return False
            elif (k-key) not in d or val!=d[k-key]:
                return False
        return True
                
