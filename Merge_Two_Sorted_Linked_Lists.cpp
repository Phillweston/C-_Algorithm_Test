#include <vector>
using namespace std;
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x): val(x), next(NULL) {}
};
class solution {
    /*
     * Question:
     * ��Ŀ�����������������������������������ϳɺ��������������ԭ�򣩡�
     * 
     * Solution:
     * 
     */
    public:
        ListNode* Merge (ListNode* p1, ListNode* p2) {
            // �鲢˼��
            ListNode* dummy = new ListNode(-1);
            auto cur = dummy;
            while (p1 && p2) {
                if (p1->val <= p2->val) {
                    cur->next = p1;
                    cur = cur->next;
                    p1 = p1->next;
                }
                else {
                    cur->next = p2;
                    cur = cur->next;
                    p2 = p2->next;
                }
            }
            if (p1) cur->next = p1;
            else cur->next = p2;
            return dummy->next;
        }
};
