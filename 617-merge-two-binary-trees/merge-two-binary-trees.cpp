class Solution {
public:
    TreeNode* mergeTrees(TreeNode* a, TreeNode* b) {
        if (!a && !b) return nullptr;
        
        int sum = (a ? a->val : 0) + (b ? b->val : 0);
        TreeNode* node = new TreeNode(sum);
        
        node->left = mergeTrees(a ? a->left : nullptr, b ? b->left : nullptr);
        node->right = mergeTrees(a ? a->right : nullptr, b ? b->right : nullptr);
        
        return node;
    }
};
