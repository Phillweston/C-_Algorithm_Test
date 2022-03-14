#include <vector>
#include <stack>
using namespace std;
class solution {
    /*
     * Question:
     * ��Ŀ�����������������У���һ�����б�ʾջ��ѹ��˳�����жϵڶ��������Ƿ�Ϊ��ջ�ĵ���˳��
     * ��ûѹ��ջ���������־�����ȡ���������1��2��3��4��5��ĳջ��ѹջ���У�����4��5��3��2��1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
     * ��4��3��5��1��2�Ͳ������Ǹ�ѹջ���еĵ�������
     * 
     * Solution:
     * 
     */
    public:
        bool IsPopOrdered(vector<int> pushV, vector<int> popV) {
            if (pushV.size() != popV.size()) return false;
            stack<int> stk;
            int i = 0;
            // for(auto x : str)������x����str��ÿһ��ֵ�ĸ��ƣ���x�ĸ�ֵ����Ӱ�쵽ԭ������
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
