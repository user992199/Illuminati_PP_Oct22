/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root) return 0;
        if(root -> val == p -> val or root -> val == q -> val) return root;
        TreeNode * lst = lowestCommonAncestor(root -> left, p, q);
        TreeNode * rst = lowestCommonAncestor(root -> right, p, q);
        if(lst and rst) return root;
        else if(lst) return lst;
        else if(rst) return rst;
        return 0;
    }
};