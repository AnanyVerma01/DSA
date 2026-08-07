class Solution(object):
    def letterCombinations(self, digits):
        letters = { "2":"abc", "3":"def","4":"ghi","5":"jkl","6":"mno", "7":"pqrs", "8":"tuv", "9":"wxyz"}
        res = []
        n = len(digits)

        def recur(i,word,letters,digits,res,n):
            if len(word)==n:
                res.append(word)
                return 
            # if i>=n:
            #     return

            for j in letters[digits[i]]:
                word += j
                recur(i+1,word,letters,digits,res,n)
                word = word[:-1]

        recur(0,"",letters,digits,res,n)
        return res


        