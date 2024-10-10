class MyQueue {
public:

    stack<int> stacks;

    MyQueue() {
    }
    
    void push(int x) {
        stacks.push(x);
    }
    
    int pop() {
        vector<int> vecs;
        while(stacks.size()!=1){
            vecs.push_back(stacks.top());
            stacks.pop();
        }
        int front = stacks.top();
        stacks.pop();
        for(int i=vecs.size()-1;i>=0; i--){
            stacks.push(vecs[i]);
        }
        return front;
    }
    
    int peek() {
        vector<int> vecs;
        while(stacks.size()!=1){
            vecs.push_back(stacks.top());
            stacks.pop();
        }
        int front = stacks.top();
        for(int i=vecs.size()-1;i>=0; i--){
            stacks.push(vecs[i]);
        }
        return front;
    }
    
    bool empty() {
        return stacks.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
