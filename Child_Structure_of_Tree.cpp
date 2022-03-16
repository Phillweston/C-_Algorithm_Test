#include <vector>
using namespace std;
struct BinaryTreeNode {
    int val;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode(int x): val(x), left(NULL), right(NULL) {}
};
class solution {
    /*
     * Question:
     * �������Ŷ�����A��B���ж�B�ǲ���A���ӽṹ
     * Լ��������������һ�������ӽṹ
     * 
     * Solution:
     * 
     */
    public:
        bool HasSubTree(BinaryTreeNode* t1, BinaryTreeNode* t2) {
            if (!t1 || !t2) return false;
            if (isPart(t1, t2)) return true;
            return HasSubTree(t1->left, t2) || HasSubTree(t1->right, t2);
        }
        // ֻ�ܱȽ�t1��t2����Ϊ���ڵ����
        bool isPart(BinaryTreeNode* t1, BinaryTreeNode* t2) {
            if (!t2) return true;   //t2�Ѿ���������Ҷ�ڵ�
            if (!t1 || t1->val != t2->val) return false;
            // �Ƚ������Ӻ���
            return isPart(t1->left, t2->left) && isPart(t1->right, t2->right);
        }
};
