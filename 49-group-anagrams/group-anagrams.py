class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        mp = defaultdict(list)
        for s in strs:
            word = ''.join(sorted(s))
            mp[word].append(s)
        
        return list(mp.values())