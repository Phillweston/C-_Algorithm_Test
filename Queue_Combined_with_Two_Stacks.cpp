#include <vector>
#include <stack>
using namespace std;
class solution {
    /*
     * Question:
     * 用两个栈实现一个队列，完成队列的Push和Pop操作。队列中的元素为int类型
     * 
     * Solution:
     * 
     */
    public:
        void push(int node) {
            stack1.push(node);
        }
        
        int pop() {
            // 1 push to 2
            // 2 top pop
            // 2 push to 1
            copy(stack1, stack2);
            int res = stack2.top();
            stack2.pop();
            copy(stack2, stack1);
            return res;
        }

        void copy(stack<int>& a, stack<int>& b) {
            while (a.size()) {
                b.push(a.top());
                a.pop();
            }
        }
    private:
        stack<int> stack1;
        stack<int> stack2;
};
