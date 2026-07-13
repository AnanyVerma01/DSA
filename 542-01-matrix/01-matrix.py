class Solution(object):
    def updateMatrix(self, mat):
        rows = len(mat)
        cols = len(mat[0])

        visited = [[0 for i in range(cols)] for _ in range(rows)]
        distance = deepcopy(visited)

        queue = deque()
        for i in range(rows):
            for j in range(cols):
                if mat[i][j]==0:
                    queue.append((i,j,0))
                    visited[i][j]=1
        
        while len(queue)!=0:
            di,dj,dis = queue.popleft()
            distance[di][dj]=dis

            for i,j in [(-1,0),(1,0),(0,-1),(0,1)]:
                newi,newj=di+i,dj+j
                if newi<0 or newi==rows or newj<0 or newj==cols:
                    continue
                if visited[newi][newj]==1:
                    continue
                visited[newi][newj]=1
                queue.append((newi,newj,dis+1))

        return distance