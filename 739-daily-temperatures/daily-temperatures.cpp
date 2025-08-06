class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int n = T.size();
        vector<int> answer(n, 0);
        stack<int> st;

        for (int i = 0; i < n; i++) {
            while (!st.empty() && T[i] > T[st.top()]) {
                int prevIdx = st.top();
                st.pop();
                answer[prevIdx] = i - prevIdx;
            }
            st.push(i);
        }

        return answer;
    }
};
