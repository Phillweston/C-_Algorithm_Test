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
     * ����ĳ��������ǰ���������������Ľ�������ؽ����ö�������
     * ���������ǰ���������������Ľ���ж������ظ������֡�����
     * ����ǰ���������{1��2��4��7��3��5��6��8}�������������{4��7��2��1��5��3��8��6}��
     * ���ؽ���ͼ2.6��ʾ�Ķ��������������ͷ��㡣���������Ķ������£�
     * 
     * Solution:
     * �ο����½̳̣�https://blog.csdn.net/qq_45269116/article/details/106235906
     * �ȴ���������������֣����ͷ�ڵ��ǰ�����е���Ԫ��ֵ���Ǹ��ڵ㣬�ҳ��������ж�Ӧ�ĸ��ڵ������������
     * ���������������о��Ǵ��������еĸ��ڵ������x����x��ֵΪ�������еĸ��ڵ���ߵ�Ԫ�ظ���
     * ���������������о��Ǵ��������е����������һ����������y����y��ֵΪ�������еĸ��ڵ��ұߵ�Ԫ�ظ���
     * Ȼ�������������������ͬ���Ĳ�����������ȵݹ飩
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
