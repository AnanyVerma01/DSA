class Solution(object):
    def updateMatrix(self, mat):
        rows = len(mat)
        cols = len(mat[0])
        visited = [[0 for _ in range(cols)] for _ in range(rows)]
        distance = deepcopy(visited)
        queue = deque()

        for i in range(rows):
            for j in range(cols):
                if mat[i][j]==0:
                    queue.append((i,j,0))
                    visited[i][j]=1

        while len(queue)!=0:
            i,j,dis = queue.popleft()
            distance[i][j]=dis
            for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
                newi,newj=i+dx,j+dy
                if newi<0 or newj<0 or newj>=cols or newi>=rows:
                    continue
                if visited[newi][newj]==1:
                    continue
                visited[newi][newj]=1
                queue.append((newi,newj,dis+1))
                    

        return distance
        