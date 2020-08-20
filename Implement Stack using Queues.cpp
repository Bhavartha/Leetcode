class MyStack {
public:
    
    queue<int> qm,qt;
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        qm.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int rv = qm.back();
        int t;
        while(qm.size()>1){
            t=qm.front();
            qm.pop();
            qt.push(t);
        }
        qm.pop();
        while(!qt.empty()){
            t=qt.front();
            qt.pop();
            qm.push(t);
        }
        return rv;
    }
    
    /** Get the top element. */
    int top() {
        return qm.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return qm.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
