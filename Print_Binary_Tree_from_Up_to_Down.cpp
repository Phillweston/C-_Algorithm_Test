#include <vector>
#include <queue>
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
     * 题目：从上往下打印出二叉树的每个结点，同一层的结点按照从左右的顺序打印。
     * 例如输入图4．5中的二义树，则依次打印出8、6、10、5、7、9、ll。
     * 
     * Solution:
     * 采用BFS广度优先队列，先获取队列首元素地址，然后输出对应的首元素地址
     * 打印出首元素的内容，然后遍历左右子树并压入队列
     */
    public:
        vector<int> PrintFromTopToBottom(BinaryTreeNode *root) {
            vector<int> result;
            if (!root) return result;
            queue<BinaryTreeNode*> q;
            q.push(root);
            // BFS 广度优先队列
            while (q.size()) {
                BinaryTreeNode *t = q.front();
                q.pop();
                result.push_back(t->val);
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
            return result;
        }
};
