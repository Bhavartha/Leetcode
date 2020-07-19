class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort()
        ans=[]
        for i in intervals:
            if ans and ans[-1][1]>=i[0]:
                temp=ans.pop()
                temp[0]=min(temp[0],i[0])
                temp[1]=max(temp[1],i[1])
                ans.append(temp)
            else:
                ans.append(i)
        return ans
            
