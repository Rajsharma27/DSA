class Solution:
    def processStr(self, s: str) -> str:
        result = []
        
        for i in s:
            if i.islower():
                result.append(i)
            elif i == '*':
                if result:
                    result.pop()  
            elif i == '#':
                result.extend(list(result))  
            else:
                result.reverse()  
                
        return "".join(result)
