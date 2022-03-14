#include <vector>
#include <stack>
using namespace std;
class solution {
    /*
     * Question:
     * ��Ŀ������ջ�����ݽṹ�����ڸ�������ʵ��һ���ܹ��õ�ջ����СԪ�ص�min������
     * �ڸ�ջ�У�����min��push��pop��ʱ�临�Ӷȶ���O(1)
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
