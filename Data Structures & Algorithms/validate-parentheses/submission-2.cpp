class Solution {
   public:
    bool isValid(string s) {
        if (s.size() % 2 != 0) return false;
        stack<char> st;
        for (char c : s) {
            switch (c) {
                case '(':
                case '[':
                case '{':
                    st.push(c);
                    break;
                case ')':
                    if(st.empty() || st.top() != '(') return false;
                    st.pop();
                    break;
                case ']':
                    if(st.empty() || st.top() != '[') return false;
                    st.pop();
                    break;
                case '}':
                    if(st.empty() || st.top() != '{') return false;
                    st.pop();
                    break;
            }
        }

        return st.empty();
    }
};
