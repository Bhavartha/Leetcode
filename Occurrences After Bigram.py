class Solution:
    def findOcurrences(self, text: str, first: str, second: str) -> List[str]:
        text= text.split(' ')
        if len(text)<3:
            return []
        ans=[]
        for t in range(len(text)-2):
            if text[t]==first and text[t+1]==second:
                ans.append(text[t+2])
        return ans
