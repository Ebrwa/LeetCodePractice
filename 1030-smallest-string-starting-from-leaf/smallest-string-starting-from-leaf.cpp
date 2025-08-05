class Solution {
public:
    string smallestFromLeaf(TreeNode* root) {
        string smallest = "~"; 

        function<void(TreeNode*, string)> dfs = [&](TreeNode* node, string current) {
            if (!node) return;

            current = char('a' + node->val) + current;

            if (!node->left && !node->right) {
                if (current < smallest) smallest = current;
            }

            dfs(node->left, current);
            dfs(node->right, current);
        };

        dfs(root, "");
        return smallest;
    }
};
