class Solution(object):
    def ladderLength(self, beginWord, endWord, wordList):
        wordList = set(wordList)
        if endWord not in wordList:
            return 0

        queue = deque()
        queue.append((beginWord,1))
        ans=0
        while len(queue) != 0:
            temp,count=queue.popleft()
            if temp == endWord:
                ans = count
            for i in range(len(temp)):
                for letter in "abcdefghijklmnopqrstuvwxyz":
                    if temp[i]==letter:
                        continue
                    new_word = temp[:i]+letter+temp[i+1:]
                    if new_word in wordList:
                        # print(new_word)
                        wordList.remove(new_word)
                        queue.append((new_word,count+1))
        return ans       

        
        