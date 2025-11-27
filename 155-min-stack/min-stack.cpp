class MinStack {
    stack<int> s, sm;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(sm.empty() || sm.top() >= val) sm.push(val);
    }
    
    void pop() {
        if(sm.top() == s.top()) sm.pop();
        s.pop();
    }
    
    int top() {
        if(s.empty()) return -1;
        return s.top();
    }
    
    int getMin() {
        if(sm.empty()) return -1;
        return sm.top();
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