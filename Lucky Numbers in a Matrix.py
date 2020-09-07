class Solution:
    def luckyNumbers (self, matrix: List[List[int]]) -> List[int]:
        mr = [min(_) for _ in matrix]
        mc = [max(_) for _ in zip(*matrix)]
        ans=[]
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==mc[j]==mr[i]:
                    ans.append(matrix[i][j])
        return ans
                
