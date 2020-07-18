class Solution:
    def combinationSum2(self, candidates: List[int], target: int) -> List[List[int]]:
        ans=[]
        if not candidates:
            return ans
        candidates.sort()
        def backtracker(c,target,path):
            if target==0 and path not in ans:
                ans.append(path.copy())
            elif target>0:
                for i in range(len(c)):
                    if c[i]>target:
                        break
                    path.append(c[i])
                    backtracker(c[i+1:],target-c[i],path)
                    path.pop()
        
        backtracker(candidates,target,[])
        return list(ans)
