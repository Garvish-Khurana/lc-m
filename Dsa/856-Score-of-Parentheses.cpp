class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);

        for(int i=0;i<s.size(); i++){
            if(s[i] == '('){
                st.push(0);
            }else {
                int x = st.top();
                st.pop();
                int sum = (x == 0) ? 1: 2*x;

                st.top() += sum; 
            }
        }

        return st.top();
    }
};