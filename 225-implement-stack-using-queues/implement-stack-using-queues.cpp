class MyStack {
public:
    queue<int>q;
   // queue<int>q2;
    MyStack() {
        
    }
    
    // Method to push element in the stack
    void push(int x) {
        // Get size 
        int s = q.size(); 
        // Add element
        q.push(x); 

        // Move elements before new element to back
        for (int i = 0; i < s; i++) {
            q.push(q.front()); 
            q.pop(); 
        }
    }

    // Method to pop element from stack
    int pop() {
        // Get front element 
        int n = q.front(); 
        // Remove front element
        q.pop(); 
        // Return removed element
        return n; 
    }

    // Method to return the top of stack
    int top() {
        // Return front element
        return q.front(); 
    }

    // Method to check if the stack is empty
    bool empty() {
        return q.empty(); 
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