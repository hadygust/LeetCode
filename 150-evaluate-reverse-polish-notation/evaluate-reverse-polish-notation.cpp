class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;

        int res = 0;
        bool haish = true;

        for (auto x : tokens){
            if(isDigit(x)){
                s.push(stoi(x));
            } else {
                if(s.empty()) return -1000;
                int calc = 0;
                int a = s.top(); s.pop();
                int b = s.top(); s.pop();

                if( x == "+"){
                    calc += b + a;
                } else if( x == "-"){
                    calc += b - a;
                } else if( x == "*"){
                    calc += b * a;
                } else if( x == "/"){
                    calc += floor(b / a);
                } 

                s.push(calc);
                haish = false;
            }
        }

        return s.top();
    }

    bool isDigit(string s){
        return s.length() > 1 || isdigit(s[0]);
    }
};