#include <vector>
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
     * ɾ�������е��ظ��ڵ�
     * 
     * Solution:
     * ʹ������ͷ�ڵ㣬����ͷ�ڵ㱻ɾ��
     * 
     */
    public:
        ListNode* deleteDuplicatedNode(ListNode* head) {
            ListNode* dummy = new ListNode(-1);
            dummy->next = head;
            ListNode* p = dummy;
            while (p->next) {
                ListNode* q = p->next;
                while (q && p->next->val == q->val) q = q->next;
                if (p->next->next == q) p = p->next;
                else p->next = q;
            }
        }
};
