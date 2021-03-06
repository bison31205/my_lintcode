/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param A: A sorted (increasing order) array
     * @return: A tree node
     */
    TreeNode *sortedArrayToBST(vector<int> &A) {
        // write your code here
        return sortedArrayToBSTHelper(A, 0, A.size() - 1);
    }
    
    TreeNode* sortedArrayToBSTHelper(vector<int>&A, int start, int end){
        if(start <= end){
            TreeNode* node = new TreeNode(A[start + (end - start) / 2]);
            node->left = sortedArrayToBSTHelper(A, start, start + (end - start) / 2 - 1);
            node->right = sortedArrayToBSTHelper(A, start + (end - start) / 2 + 1, end);
            return node;
        }
        return nullptr;
    }
};

