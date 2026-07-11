class Solution(object):
    def floodFill(self, image, sr, sc, color):
        rows = len(image)
        cols = len(image[0])

        if image[sr][sc]==color:
            return image
        
        queue = deque()
        queue.append((sr,sc))
        prev = image[sr][sc]
        

        while len(queue)!=0:
            i,j=queue.popleft()
            image[i][j]=color
            for dx,dy in [(-1,0),(1,0),(0,-1),(0,1)]:
                newi,newj = i+dx,j+dy
                if newi<0 or newi>=rows or newj<0 or newj>=cols:
                    continue
                if image[newi][newj]!=prev or image[newi][newj]==color:
                    continue
                queue.append((newi,newj))
        

        return image


