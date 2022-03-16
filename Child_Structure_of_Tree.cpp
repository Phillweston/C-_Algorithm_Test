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
     * 输入两颗二叉树A、B，判断B是不是A的子结构
     * 约定空树不是任意一个树的子结构
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
        // 只能比较t1、t2各自为根节点的树
        bool isPart(BinaryTreeNode* t1, BinaryTreeNode* t2) {
            if (!t2) return true;   //t2已经遍历到了叶节点
            if (!t1 || t1->val != t2->val) return false;
            // 比较左右子孩子
            return isPart(t1->left, t2->left) && isPart(t1->right, t2->right);
        }
};
