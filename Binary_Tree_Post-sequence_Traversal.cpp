#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * ��Ŀ������һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ����
     * ������򷵻�true�����򷵻�false���������������������������ֶ�������ͬ��
     * 
     * Solution:
     * 
     */
    public:
        // �������ص㣺����<���׽ڵ�<�Һ���
        // ���Ҹ����������һ�����־��Ǹ��ڵ�/���׽ڵ�
        // ���������ֽ�㣬����ڵ���Ƚϣ�С��Ϊ������������Ϊ������
        vector<int> seq;
        bool VerifySequenceOfBST (vector<int> sequence) {
            seq = sequence;
            if (seq.empty()) return false;
            return dfs(0, seq.size() - 1);
        }
        bool dfs (int l, int r) {
            if (l >= r) return true;
            int father = seq[r];
            // ��������С��
            int k = l;
            while (k < r && seq[k] < father) k ++;
            // ������������
            for (int i = k; i < r; i ++) {
                if (seq[i] < father)
                    return false;
            }
            return dfs(1, k - 1) && dfs(k, r - 1);
        }
};
