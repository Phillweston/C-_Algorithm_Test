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
     * ��Ŀ���������´�ӡ����������ÿ����㣬ͬһ��Ľ�㰴�մ����ҵ�˳���ӡ��
     * ��������ͼ4��5�еĶ������������δ�ӡ��8��6��10��5��7��9��ll��
     * 
     * Solution:
     * ����BFS������ȶ��У��Ȼ�ȡ������Ԫ�ص�ַ��Ȼ�������Ӧ����Ԫ�ص�ַ
     * ��ӡ����Ԫ�ص����ݣ�Ȼ���������������ѹ�����
     */
    public:
        vector<int> PrintFromTopToBottom(BinaryTreeNode *root) {
            vector<int> result;
            if (!root) return result;
            queue<BinaryTreeNode*> q;
            q.push(root);
            // BFS ������ȶ���
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
