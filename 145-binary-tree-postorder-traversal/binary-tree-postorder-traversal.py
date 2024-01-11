# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def postorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        def postOrder(node, res):
            if node == None:
                return
            postOrder(node.left, res)
            postOrder(node.right, res)
            res.append(node.val)
            
        res = []
        postOrder(root, res)

        return res
        
