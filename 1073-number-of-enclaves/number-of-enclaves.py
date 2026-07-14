class Solution(object):
    def numEnclaves(self, grid):
        rows=len(grid)
        cols=len(grid[0])
        visited=[[0 for _ in range(cols)] for _ in range(rows)]

        queue = deque()
        for i in range(rows):
            for j in range(cols):
                if i==0 or j==0 or i==rows-1 or j==cols-1:
                    if grid[i][j]==1:
                        queue.append((i,j))

        while len(queue)!=0:
            i,j = queue.pop()
            visited[i][j]=1
            for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
                newi,newj=i+dx,j+dy
                if newi<0 or newj<0 or newi==rows or newj==cols:
                    continue
                if grid[newi][newj]==0 or visited[newi][newj]==1:
                    continue
                visited[newi][newj]=1
                queue.append((newi,newj))

        count=0
        for i in range(rows):
            for j in range(cols):
                if grid[i][j]==1 and visited[i][j]==0:
                    count+=1

        return count 
        
        # def dfs(i,j,rows,cols,grid,visited):
        #     if i<0 or j<0 or i>=rows or j>=cols:
        #         return
        #     if grid[i][j]==0 or visited[i][j]==1:
        #         return
        #     visited[i][j]=1
        #     dfs(i-1,j,rows,cols,grid,visited)
        #     dfs(i+1,j,rows,cols,grid,visited)
        #     dfs(i,j-1,rows,cols,grid,visited)
        #     dfs(i,j+1,rows,cols,grid,visited)

        
        # for i in range(rows):
        #     for j in range(cols):
        #         if i==0 or j==0 or i==rows-1 or j==cols-1:
        #             if grid[i][j]==1:
        #                 dfs(i,j,rows,cols,grid,visited)

        # count=0
        # for i in range(rows):
        #     for j in range(cols):
        #         if visited[i][j]==0 and grid[i][j]==1:
        #             count+=1

        # return count
                    
        