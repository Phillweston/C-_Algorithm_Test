#include <vector>
#include <queue>
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
     * Z字形打印二叉树
     * 
     * Solution:
     * 思路跟分行打印一致，需要控制奇偶行的序列
     */
    public:
        vector<vector<int>> Print(BinaryTreeNode *root) {
            vector<vector<int>> result;
            if(!root) return result;
            queue<BinaryTreeNode*> q;
            BinaryTreeNode *t;
            q.push(root);
            q.push(nullptr);
            vector<int> layer;
            // 判断偶数行是否需要逆序操作
            bool zigzag = false;
            while(q.size()) {
                t = q.front();
                q.pop();
                if(!t) {
                    if(layer.empty()) break;
                    if(zigzag) reverse(layer.begin(), layer.end());
                    result.push_back(layer);
                    layer.clear();
                    zigzag = !zigzag;
                    q.push(nullptr);
                    continue;
                }
            }
            layer.push_back(t->val);
            if(t->left) q.push(t->left);
            if(t->right) q.push(t->right);
        }
};
