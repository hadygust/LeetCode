class MinStack {
public:

    stack<int> st,tmp;
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        if(tmp.empty() || val <= tmp.top()){
            tmp.push(val);
        }
    }
    
    void pop() {
        if(st.top() == tmp.top()) tmp.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return tmp.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */