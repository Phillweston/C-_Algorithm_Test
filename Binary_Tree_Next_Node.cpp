#include <vector>
#include <unordered_map>
using namespace std;
struct BinaryTreeNode {
    int val;
    BinaryTreeNode *left;
    BinaryTreeNode *right;
    BinaryTreeNode *next;
    BinaryTreeNode(int x): val(x), left(NULL), right(NULL), next(NULL) {}
};
class solution {
    /*
     * Question:
     * 给定一个二叉树和其中的一个结点，请找出中序遍历顺序的下一个结点并且返回。
     * 注意，树中的结点不仅包含左右子结点，同时包含指向父结点的指针。
     * 
     * Solution:
     * 
     */
    public:
        BinaryTreeNode* GetNextNode(BinaryTreeNode* p) {
            // 右子树存在，右子树最左边的结点
            if (p->right) {
                p = p->right;
                while (p->left) {
                    p = p->left;
                }
                return p;
            }
            // 右子树不存在，只有左子树
            while (p->next) {
                // P不是根节点
                if (p == p->next->left) {
                    return p->next;
                }
                p = p->next;
            }
            return NULL;
        }
};
