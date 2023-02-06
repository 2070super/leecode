class MinStack {
public:
    MinStack()
     {}
    
    void push(int val) {
        _st.push(val);
        if(_minst.empty()||_minst.top()>=val)
        {
            _minst.push(val);
        }
    }
    
    void pop() {
        if(_st.top()==_minst.top())
        {
            _minst.pop();
        }
        _st.pop();

    }
    
    int top() {
        return _st.top();
    }
    
    int getMin() {
        return _minst.top();
    }
    private:
    stack<int> _st;
    stack<int> _minst;
};
