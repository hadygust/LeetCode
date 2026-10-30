class Solution {
public:
    bool isValid(string s) {
        map<char,char> m;
        m['('] = ')';
        m['['] = ']';
        m['{'] = '}';

        stack<char> st;

        for(auto c : s){
            if(c != '(' && c != '{' && c != '['){
                if(st.size() == 0 || c != m[st.top()]) return false;
                st.pop();
            } else {
                st.push(c);
            }
        }

        return st.empty();
    }
};