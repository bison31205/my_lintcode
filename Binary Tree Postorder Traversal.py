"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        self.val = val
        self.left, self.right = None, None
"""


class Solution:
    """
    @param root: The root of binary tree.
    @return: Postorder in ArrayList which contains node values.
    """
    def postorderTraversal(self, root):
        # write your code here
        
        # def doTra(node, ret):
        #     if not node:
        #         return
        #     else:
        #         doTra(node.left, ret)
        #         doTra(node.right, ret)
        #         ret.append(node.val)
        
        # ret = []
        # doTra(root, ret)
        # return ret
        
        ret = []
        if not root:
            return ret
        
        stack = []
        node = root
        while node:
            stack.append([node, 0])
            node = node.left
        while stack:
            p = stack[-1]
            if p[1] == 0:
                ##error p[1] "==" 1
                p[1] = 1
                node = p[0].right
                while node:
                    stack.append([node, 0])
                    node = node.left
            else:
                ret.append(p[0].val)
                stack.pop()
        return ret
                