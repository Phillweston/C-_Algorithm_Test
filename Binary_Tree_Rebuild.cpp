#include <vector>
#include <unordered_map>
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
     * 输入某二叉树的前序遍历和中序遍历的结果，请重建出该二叉树。
     * 假设输入的前序遍历和中序遍历的结果中都不含重复的数字。例如
     * 输入前序遍历序列{1，2，4，7，3，5，6，8}和中序遍历序列{4，7，2，1，5，3，8，6}，
     * 则重建出图2.6所示的二叉树并输出它的头结点。二叉树结点的定义如下：
     * 
     * Solution:
     * 参考如下教程：https://blog.csdn.net/qq_45269116/article/details/106235906
     * 先从中序遍历序列入手，输出头节点后前序序列的首元素值就是根节点，找出中序序列对应的根节点的左右子树，
     * 左子树的先序序列就是从先序序列的根节点往后查x个，x的值为中序序列的根节点左边的元素个数
     * 右子树的先序序列就是从先序序列的左子树最后一个结点往后查y个，y的值为中序序列的根节点右边的元素个数
     * 然后对左右子树进行上面同样的操作（深度优先递归）
     */
    public:
        // Record positions of elements in middle-sequence
        unordered_map<int, int> pos;
        BinaryTreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
            // pre: pre-sequence; vin: middle-sequence
            int n = pre.size();
            for (int i = 0; i < n; i++)
                pos[vin[i]] = i;
            return dfs(pre, vin, 0, n - 1, 0, n - 1);
        }

        BinaryTreeNode* dfs(vector<int> pre, vector<int> vin, int pl, int pr, int vl, int vr) {
            // pl: pre-sequence left boundary; pr: pre-sequence right boundary
            // vl: middle-sequence left boundary; vr: middle-sequence right boundary
            // Pre-sequence: root, left, right
            // Middle-sequence: left, root, right
            if (pl > pr) return NULL;
            // Find root node: pre[pl]
            BinaryTreeNode* root = new BinaryTreeNode(pre[pl]);
            // Length of the left tree
            int k = pos[pre[pl]] - vl;
            // Root node: vl + k
            root->left = dfs(pre, vin, pl + 1, pl + k, vl, vl + k - 1);
            // 
            root->right = dfs(pre, vin, pl + k + 1, pr, vl + k + 1, vr);
            return root;
        }
};
