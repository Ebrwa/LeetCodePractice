class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long> st;

        for (auto &token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                long long b = st.top(); st.pop();
                long long a = st.top(); st.pop();

                long long res;
                if (token == "+") res = a + b;
                else if (token == "-") res = a - b;
                else if (token == "*") res = a * b;
                else res = a / b;

                st.push(res);
            } else {
                st.push(stoll(token));
            }
        }

        return st.top();
    }
};
