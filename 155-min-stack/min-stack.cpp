class MinStack {
public:

    stack<int> s, s1;

    MinStack() {}
    
    void push(int v) {
        s.push(v);

        if(s1.empty() || s1.top() >= v){
            s1.push(v);
        }
    }
    
    void pop() {
        if(s.empty()) return;
        int v = s.top();

        s.pop();

        if(s1.top() == v) s1.pop();
    }
    
    int top() {
        return (s.empty()) ? -1 : s.top();
    }
    
    int getMin() {
        return (s1.empty()) ? -1 : s1.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */