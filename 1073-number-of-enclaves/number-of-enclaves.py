class Solution(object):
    def numEnclaves(self, grid):
        rows = len(grid)
        cols = len(grid[0])
        visited = [[0 for _ in range(cols)] for _ in range(rows)]

        def recur(i,j,board,visited):
            if i<0 or j<0 or i>=len(board) or j>=len(board[0]):
                return
            if board[i][j]==0 or visited[i][j]==1:
                return

            visited[i][j]=1
            
            recur(i-1,j,board,visited)
            recur(i+1,j,board,visited)
            recur(i,j-1,board,visited)
            recur(i,j+1,board,visited)

        for i in range(rows):
            for j in range(cols):
                if i==0 or i==rows-1 or j==0 or j==cols-1:
                    if grid[i][j]==1 and visited[i][j]==0:
                        recur(i,j,grid,visited)
        
        count=0
        for i in range(rows):
            for j in range(cols):
                if grid[i][j]==1 and not visited[i][j]:
                    count+=1

        return count
        