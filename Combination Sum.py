class Solution:
    def combinationSum(self, candidates: List[int], target: int) -> List[List[int]]:
        ans=[]
        if not candidates:
            return ans
                
        def backtracker(target,index,path):
            if target==0:
                ans.append(path.copy())
            elif target>0:
                for i in range(index,len(candidates)):
                    path.append(candidates[i])
                    backtracker(target-candidates[i],i,path)
                    path.pop()
        
        backtracker(target,0,[])
        return ans
