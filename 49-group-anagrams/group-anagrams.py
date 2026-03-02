from collections import defaultdict
class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        mp = defaultdict(list)
        for s in strs:
            word = ''.join(sorted(s))
            mp[word].append(s)
        
        return list(mp.values())

        
        


        