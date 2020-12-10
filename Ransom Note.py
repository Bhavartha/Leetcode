class Solution:
    def canConstruct(self, r: str, m: str) -> bool:
        dm=dict()
        for i in m:
            if i not in dm:
                dm[i]=1
            else:
                dm[i]+=1
        for i in r:
            if i not in dm or dm[i]==0:
                return False
            dm[i]-=1
        return True
        
