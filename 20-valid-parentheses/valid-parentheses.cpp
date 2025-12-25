class Solution {
public:
    bool isValid(string s) {
        // if(s.size() & 1)return false;
        stack<char> st;

        for(char c : s){
            if(c == '('){
                st.push(')');
            }
            else if(c == '['){
                st.push(']');
            }
            else if(c == '{'){
                st.push('}');
            }
            else{
                if(st.size() >= 1 and st.top() == c)
                    st.pop();\
                else
                    return false;
            }
        }
        return st.size() ? false : true;
    }
};