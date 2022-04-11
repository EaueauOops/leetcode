/*
 * @lc app=leetcode.cn id=155 lang=java
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack {
    Deque<Integer> S;
    Deque<Integer> M;
    
    public MinStack() {
        S = new LinkedList<Integer>();
        M = new LinkedList<Integer>();
        M.push(Integer.MAX_VALUE);
    }
    
    public void push(int val) {
        S.push(val);
        M.push(Math.min(M.peek(),val));
        return;
    }
    
    public void pop() {
        S.pop();
        M.pop();
    }
    
    public int top() {
        return S.peek();
    }
    
    public int getMin() {
        return M.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
// @lc code=end

