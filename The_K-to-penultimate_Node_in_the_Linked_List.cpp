#include <vector>
#include <unordered_map>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x):
        val(x), next(NULL) {}
};
class solution {
    /*
     * Question:
     * ��Ŀ������һ����������������е�����k����㡣
     * Ϊ�˷��ϴ���˵�ϰ�ߣ������1��ʼ�������������β����ǵ�����1����㡣
     * һ��������6����㣬��ͷ��㿪ʼ���ǵ�ֵ������1��2��3��4��5��6��
     * �������ĵ�����3�������ֵΪ4�Ľ�㡣
     * 
     * Solution:
     * 
     */
    public:
        ListNode* FindKthToTail(ListNode* head, unsigned int k) {
            int n = 0;
            ListNode* p = head;
            for (p = head; p != NULL; p = p->next) n++;
            if (k > n) return nullptr;
            p = head;
            for (int i = 0; i < n - k; i++) p = p->next;
            return p;
        }
};
