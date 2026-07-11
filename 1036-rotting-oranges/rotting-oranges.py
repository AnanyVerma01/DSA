class Solution(object):
    def orangesRotting(self, grid):
        rows = len(grid)
        cols = len(grid[0])
        mat = deepcopy(grid)
        queue = deque()
        fresh = 0

        for i in range(0,rows):
            for j in range(0,cols):
                if mat[i][j] == 2:
                    queue.append((i,j))
                if mat[i][j] == 1:
                    fresh = 1+fresh

        minutes = 0
        while len(queue)!=0 and fresh>0:
            minutes = minutes+1
            times = len(queue)

            for _ in range(times):
                i,j = queue.popleft()
                for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
                    if i+dx<0 or i+dx==rows or j+dy<0 or j+dy==cols:
                        continue
                    if mat[i+dx][j+dy]==0 or mat[i+dx][j+dy]==2:
                        continue

                    fresh=fresh-1
                    mat[i+dx][j+dy]=2
                    queue.append((i+dx,j+dy))


        if fresh>0:
            return -1
        return minutes