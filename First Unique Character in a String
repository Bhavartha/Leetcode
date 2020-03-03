class Solution:
    def firstUniqChar(self, s: str) -> int:
        ui=dict()
        for i in range(len(s)):
            if s[i] not in ui:
                ui[s[i]]=i
                continue
            ui[s[i]]=-1
        m=float('inf')
        for i in ui.keys():
            if -1<ui[i]<m:
                m=ui[i]
        if m==float('inf'):
            return -1
        return m
            
