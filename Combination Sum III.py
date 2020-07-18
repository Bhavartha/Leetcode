class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        ans=[]
        c=list(range(1,10))
        def backtracker(c,k,target,path):
            if target==0 and k==0 and path not in ans:
                ans.append(path.copy())
            elif target>0:
                for i in range(len(c)):
                    if c[i]>target:
                        break
                    path.append(c[i])
                    backtracker(c[i+1:],k-1,target-c[i],path)
                    path.pop()
        
        backtracker(c,k,n,[])
        return list(ans)
