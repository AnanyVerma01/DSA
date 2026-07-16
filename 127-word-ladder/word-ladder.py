class Solution(object):
    def ladderLength(self, beginWord, endWord, wordList):
        wordSet = set(wordList)

        if endWord not in wordSet:
            return 0

        queue = deque([(beginWord, 1)])

        while queue:

            word, level = queue.popleft()

            if word == endWord:
                return level

            word = list(word)

            for i in range(len(word)):

                original = word[i]

                for ch in "abcdefghijklmnopqrstuvwxyz":

                    word[i] = ch
                    newWord = "".join(word)

                    if newWord in wordSet:
                        queue.append((newWord, level + 1))
                        wordSet.remove(newWord)

                word[i] = original

        return 0
        