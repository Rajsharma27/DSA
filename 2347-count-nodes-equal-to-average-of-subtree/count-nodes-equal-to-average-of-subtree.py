# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.ans = 0

    def dfs(self,node:TreeNode):
        if not node:
            return 0,0
        left_sum, left_cnt = self.dfs(node.left)
        right_sum, right_cnt = self.dfs(node.right)
        total_sum = left_sum+right_sum+node.val
        total_cnt = left_cnt+right_cnt+1
        if total_sum // total_cnt == node.val:
            self.ans += 1
        return total_sum, total_cnt

    def averageOfSubtree(self, root: TreeNode) -> int:
        self.dfs(root)
        return self.ans
