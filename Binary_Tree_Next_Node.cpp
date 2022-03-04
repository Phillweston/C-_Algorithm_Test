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
     * ����һ�������������е�һ����㣬���ҳ��������˳�����һ����㲢�ҷ��ء�
     * ע�⣬���еĽ�㲻�����������ӽ�㣬ͬʱ����ָ�򸸽���ָ�롣
     * 
     * Solution:
     * 
     */
    public:
        BinaryTreeNode* GetNextNode(BinaryTreeNode* p) {
            // ���������ڣ�����������ߵĽ��
            if (p->right) {
                p = p->right;
                while (p->left) {
                    p = p->left;
                }
                return p;
            }
            // �����������ڣ�ֻ��������
            while (p->next) {
                // P���Ǹ��ڵ�
                if (p == p->next->left) {
                    return p->next;
                }
                p = p->next;
            }
            return NULL;
        }
};
