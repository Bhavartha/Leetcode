class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        ans = [0]*len(boxes)
        total = 0
        l = 0
        for i in range(len(boxes)):
            if boxes[i]=='1':
                total+=1
                ans[0]+=i
        
        for i in range(1,len(boxes)):
            if boxes[i-1]=='1':
                l+=1
            ans[i] = ans[i-1]-total+2*l
        return ans
        
