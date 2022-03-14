#include <algorithm>
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
     * ������������Ϊԭ���ľ���
     * 
     * Solution:
     * 
     */
    public:
        void MirrorOfBinaryTree(BinaryTreeNode* root) {
            if (!root) return;
            MirrorOfBinaryTree(root->left);
            MirrorOfBinaryTree(root->right);
            swap (root->left, root->right);
        }
};
