# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        """
        if not root:
            return

        arr = []

        def preorder(node: Optional[TreeNode]):
            if not node:
                return
            arr.append(node)
            preorder(node.left)
            preorder(node.right)
        preorder(root)

        for i in range(len(arr)-1):
            arr[i].left = None
            arr[i].right = arr[i+1]

        arr[-1].left = None
        arr[-1].right = None