class Solution:
    def totalNQueens(self, n: int) -> List[List[str]]:
        
        ans=[]
        board=[list("."*n) for i in range(n)]
        
        def isValid(board,rn,cn):
            #row
            for i in range(n):
                if i!=cn and board[rn][i]=='Q':
                    return False
            #column
            for i in range(n):
                if i!=rn and board[i][cn]=='Q':
                    return False
            #up-left
            r=rn-1
            c=cn-1
            while r>=0 and c>=0:
                if board[r][c]=='Q':
                    return False
                r-=1
                c-=1
            #up-right
            r=rn-1
            c=cn+1
            while r>=0 and c<n:
                if board[r][c]=='Q':
                    return False
                r-=1
                c+=1
                
            #down-left
            r=rn+1
            c=cn-1
            while r<n and c>=0:
                if board[r][c]=='Q':
                    return False
                r+=1
                c-=1
                
            #down-right
            r=rn+1
            c=cn+1
            while r<n and c<n:
                if board[r][c]=='Q':
                    return False
                r+=1
                c+=1
            
            return True
            
        def backtracker(board,rn,cn):
            if rn==n:
                temp=[''.join(board[i]) for i in range(n)]
                ans.append(temp)
                return
            for i in range(n):
                board[rn][i]='Q'
                if isValid(board,rn,i):
                    backtracker(board,rn+1,i)
                board[rn][i]='.'
        # return board
        backtracker(board,0,0)
        
        return len(ans)
