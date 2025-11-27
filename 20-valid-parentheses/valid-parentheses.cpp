class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c : s){
            if(c == '(' || c == '[' || c == '{'){
                st.push(c);
            } else {
                if(st.size() == 0) return false;
                char p = st.top();st.pop();

                if(p == '(' && c != ')'){
                    return false;
                } else if(p == '[' && c != ']'){
                    return false;
                } else if(p == '{' && c != '}'){
                    return false;
                }
            }
        }


        return st.size() == 0;
    }
};