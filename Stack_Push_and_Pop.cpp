#include <vector>
#include <stack>
using namespace std;
class solution {
    /*
     * Question:
     * 题目：输入两个整数序列，第一个序列表示栈的压入顺序，请判断第二个序列是否为该栈的弹出顺序。
     * 假没压入栈的所有数字均不相等。例如序列1、2、3、4、5是某栈的压栈序列，序列4、5、3、2、1是该压栈序列对应的一个弹出序列，
     * 但4、3、5、1、2就不可能是该压栈序列的弹出序列
     * 
     * Solution:
     * 
     */
    public:
        bool IsPopOrdered(vector<int> pushV, vector<int> popV) {
            if (pushV.size() != popV.size()) return false;
            stack<int> stk;
            int i = 0;
            // for(auto x : str)是利用x生成str中每一个值的复制，对x的赋值不会影响到原容器。
            // stk.top() == popV[i]     stk.pop()
            // stk.top() != popV[i]     stk.push()
            for (auto x : pushV) {
                stk.push(x);
                while (stk.size() && stk.top() == popV[i]) {
                    stk.pop();
                    i ++;
                }
            }
            return stk.empty();
        }
};
