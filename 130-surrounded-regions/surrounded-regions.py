class Solution(object):
    def solve(self, board):
        rows = len(board)
        cols = len(board[0])
        visited = [[0 for _ in range(cols)] for _ in range(rows)]

        def recur(i,j,board,visited):
            if i<0 or j<0 or i>=len(board) or j>=len(board[0]):
                return
            if board[i][j]=="X" or visited[i][j]==1:
                return

            visited[i][j]=1
            
            recur(i-1,j,board,visited)
            recur(i+1,j,board,visited)
            recur(i,j-1,board,visited)
            recur(i,j+1,board,visited)

        for i in range(rows):
            for j in range(cols):
                if i==0 or i==rows-1 or j==0 or j==cols-1:
                    if board[i][j]=="O" and visited[i][j]==0:
                        recur(i,j,board,visited)
        
        for i in range(rows):
            for j in range(cols):
                if board[i][j]=="O" and not visited[i][j]:
                    board[i][j]="X"