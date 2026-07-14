class Solution(object):
    def solve(self, board):
        rows=len(board)
        cols=len(board[0])
        visited = [[0 for i in range(cols)] for _ in range(rows)]

        def dfs(i,j,rows,cols,board,visited):
            if i<0 or j<0 or i>=rows or j>=cols:
                return
            if board[i][j]=="X" or visited[i][j]==1:
                return
            visited[i][j]=1
            dfs(i-1,j,rows,cols,board,visited)
            dfs(i+1,j,rows,cols,board,visited)
            dfs(i,j-1,rows,cols,board,visited)
            dfs(i,j+1,rows,cols,board,visited)

        
        for i in range(rows):
            for j in range(cols):
                if i==0 or j==0 or i==rows-1 or j==cols-1:
                    if board[i][j]=='O':
                        dfs(i,j,rows,cols,board,visited)
                
                    
        
        for i in range(rows):
            for j in range(cols):
                if visited[i][j]==0:
                    board[i][j]="X"