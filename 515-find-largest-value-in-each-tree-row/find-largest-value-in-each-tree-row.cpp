class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> result;
        if (!root) return result;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int size = q.size();
            int maxVal = INT_MIN;

            for (int i = 0; i < size; i++) {
                TreeNode* current = q.front();
                q.pop();

                maxVal = max(maxVal, current->val);

                if (current->left) q.push(current->left);
                if (current->right) q.push(current->right);
            }

            result.push_back(maxVal);
        }

        return result;
    }
};
