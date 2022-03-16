#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 题目：输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。
     * 如果是则返回true，否则返回false。假设输入的数组的任意两个数字都互不相同。
     * 
     * Solution:
     * 
     */
    public:
        // 二叉树特点：左孩子<父亲节点<右孩子
        // 左右根，数组最后一个数字就是根节点/父亲节点
        // 左右子树分界点，与根节点相比较，小于为左子树，大于为右子树
        vector<int> seq;
        bool VerifySequenceOfBST (vector<int> sequence) {
            seq = sequence;
            if (seq.empty()) return false;
            return dfs(0, seq.size() - 1);
        }
        bool dfs (int l, int r) {
            if (l >= r) return true;
            int father = seq[r];
            // 左子树都小于
            int k = l;
            while (k < r && seq[k] < father) k ++;
            // 右子树都大于
            for (int i = k; i < r; i ++) {
                if (seq[i] < father)
                    return false;
            }
            return dfs(1, k - 1) && dfs(k, r - 1);
        }
};
