class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        dl,ll=[],[]
        for l in logs:
            if l[-1].isnumeric():
                dl.append(l)
                continue
            e = l.split(' ',1)
            ll.append([e[-1],e[0]])
            
        ll.sort()
        
        for i in range(len(ll)):
            ll[i] = ' '.join(ll[i][::-1])
            
        return ll+dl
            
