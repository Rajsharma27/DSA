class Solution:
    def findPermutation(self, s):
        ans = []

        def permute(inp, out):
            if len(inp) == 0:
                ans.append(out)
                return
            used = set()  
            for i in range(len(inp)):
                if inp[i] in used:
                    continue
                
                used.add(inp[i])
                
                new_inp = inp[:i] + inp[i+1:]
                new_out = out + inp[i]
                
                permute(new_inp, new_out)

        permute(s, "")
        return sorted(ans)