class Solution(object):
    def orangesRotting(self, grid):
        rows = len(grid)
        cols = len(grid[0])
        matrix = deepcopy(grid)

        queue = deque()
        fresh = 0
        for i in range(rows):
            for j in range(cols):
                if grid[i][j]==1:
                    fresh+=1
                if grid[i][j]==2:
                    queue.append((i,j))

        if fresh==0:
            return 0

        seconds=0
        while len(queue)!=0:
            size = len(queue)
            seconds+=1
            for times in range(size):
                i,j = queue.popleft()
                for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
                    newi,newj=i+dx,j+dy
                    if newi<0 or newj<0 or newi>=rows or newj>=cols:
                        continue
                    if matrix[newi][newj]==2 or matrix[newi][newj]==0:
                        continue
                    fresh-=1
                    queue.append((newi,newj))
                    matrix[newi][newj]=2
        
        if fresh!=0:
            return -1
        else: 
            return seconds-1

        