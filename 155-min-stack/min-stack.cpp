class MinStack {
public:

    stack<pair<int,int>> s;
    MinStack() {
        
    }
    
    void push(int v) {
        if(s.empty()){
            s.push({v, v});
            return;
        }

        if(v < s.top().second){
            s.push({v, v});
        } else {
            s.push({v, s.top().second});
        }
    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.empty() ? -1 : s.top().first;
    }
    
    int getMin() {
        return s.empty() ? -1 : s.top().second;
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