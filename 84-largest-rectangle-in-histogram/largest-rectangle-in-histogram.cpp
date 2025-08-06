class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        st.push(-1);
        int maxArea = 0;
        int n = heights.size();

        for (int i = 0; i < n; ++i) {
            while (st.top() != -1 && heights[st.top()] >= heights[i]) {
                int h = heights[st.top()];
                st.pop();
                int width = i - st.top() - 1;
                maxArea = max(maxArea, h * width);
            }
            st.push(i);
        }

        while (st.top() != -1) {
            int h = heights[st.top()];
            st.pop();
            int width = n - st.top() - 1;
            maxArea = max(maxArea, h * width);
        }

        return maxArea;
    }
};
