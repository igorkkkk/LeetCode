# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        # ans = 0
        # def helper(root):
        #     if not root:
        #         return 0
        #     else:
        #         return 0 + max(1+helper(root.left),1+helper(root.right))
        # if not root:
        #     return ans
        # ans = max(ans, helper(root.left)+helper(root.right))
        # return max( self.diameterOfBinaryTree(root.left) ,max(ans,self.diameterOfBinaryTree(root.right)))
        # self.ans = -float('inf')

        # def helper(root):
        #     if not root:
        #         return 0
        #     left = helper(root.left)
        #     right = helper(root.right)
        #     self.ans = max(self.ans,left+right)
        #     return 1 + max(left,right)
        # helper(root)
        # return self.ans
        def helper(root):
            if not root:
                return 0,0
            ld,lh = helper(root.left)
            rd, rh = helper(root.right)

            return max(ld,rd,lh+rh), 1+max(lh,rh)
        return helper(root)[0]