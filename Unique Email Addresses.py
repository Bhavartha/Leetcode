class Solution:
    def numUniqueEmails(self, emails: List[str]) -> int:
        s = set()
        for e in emails:
            ln,dn = e.split('@')
            ln = ln.replace('.','')
            p = ln.find('+')
            if p!= -1:
                ln = ln[:p]
            s.add(ln+'@'+dn)
        return len(s)
