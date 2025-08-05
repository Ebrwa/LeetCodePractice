class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> result;
        if (!root) return result;

        function<void(TreeNode*, string)> dfs = [&](TreeNode* node, string path) {
            if (!node) return;

            if (!node->left && !node->right) {
                result.push_back(path + to_string(node->val));
                return;
            }

            path += to_string(node->val) + "->";
            dfs(node->left, path);
            dfs(node->right, path);
        };

        dfs(root, "");
        return result;
    }
};
