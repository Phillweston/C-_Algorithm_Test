#include <vector>
#include <stack>
using namespace std;
class solution {
    /*
     * Question:
     * 题目：定义栈的数据结构，请在该类型中实现一个能够得到栈的最小元素的min函数。
     * 在该栈中，调用min、push及pop的时间复杂度都是O(1)
     * 
     * Solution:
     * 
     */
    public:
        stack<int> stk, minstk;
        void push(int value) {
            stk.push(value);
            if (minstk.empty() || minstk.top() >= value) {
                minstk.push(value);
            }
        }
        void pop() {
            if (minstk.top() == stk.top()) {
                minstk.pop();
            }
            stk.pop();
        }
        int top() {
            return stk.top();
        }
        int min() {
            return minstk.top();
        }
};
