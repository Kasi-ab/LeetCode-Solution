class MinStack {
    stack<int> st;
    stack<int> minSt; 
public:
   
    void push(int val) {
       st.push(val);
       if(minSt.empty()){
         minSt.push(val);
       }
       else if(val<=minSt.top()){
         minSt.push(val);   
       }
    }
    
    void pop() {
       int n = st.top();
       st.pop();
       if(n==minSt.top()){
         minSt.pop();
       } 
    }
    
    int top() {
        return st.top();   
    }
    
    int getMin() {
        return minSt.top();
    }
};
