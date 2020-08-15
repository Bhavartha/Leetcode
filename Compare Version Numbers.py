class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        v1=list(map(int,version1.split('.')))
        v2=list(map(int,version2.split('.')))
        if len(v1)>len(v2):
            v2+=[0]*(len(v1)-len(v2))
        elif len(v1)<len(v2):
            v1+=[0]*(len(v2)-len(v1))
        if v1<v2:
            return -1
        elif v1>v2:
            return 1
        return 0
