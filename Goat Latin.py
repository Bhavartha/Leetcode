class Solution:
    def toGoatLatin(self, string: str) -> str:
        string=string.split()
        ans=[]
        for i,s in enumerate(string):
            _=s
            if s[0] in "aeiouAEIOU":
                _+="ma"
            else:
                _=_[1:]+_[0]+"ma"
            _+="a"*(i+1)
            ans.append(_)
        return " ".join(ans)
