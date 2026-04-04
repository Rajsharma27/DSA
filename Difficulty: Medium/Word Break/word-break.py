class Solution:
    def wordBreak(self, s, dictionary):
        # code here
        wordset = set(dictionary)
        memo = {}

        def isvalid(p):
            if p == len(s):
                return True
            if p in memo:
                return memo[p]
            for i in range(p + 1, len(s) + 1):
                temp = s[p:i]
                if temp in wordset and isvalid(i): 
                    memo[p] = True
                    return True

            memo[p] = False
            return False
            
        return isvalid(0)