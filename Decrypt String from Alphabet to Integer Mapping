class Solution:
    def freqAlphabets(self, s: str) -> str:
        ans=[]
        pointer = len(s)-1
        while pointer>=0:
            if s[pointer]=='#':
                ans.append(int(s[pointer-2:pointer]))
                pointer-=3
            else:
                ans.append(int(s[pointer]))
                pointer-=1
        return ''.join([chr(_ + 96) for _ in ans[::-1]])
