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
     * ����һ�������������β��ͷ��˳�򷵻�һ��ArrayList
     * 
     * Solution:
     * rbegin�൱�����������rend�൱�����������Ҳ����vector��ʼ��Ԫ��
     */
    public:
        vector<int> printListFromTailToHead(ListNode* head) {
            vector<int> result;
            ListNode* p = head;
            while (p != NULL) {
                result.push_back(p->val);
                p = p->next;
            }
            return vector<int>(result.rbegin(), result.rend());
        }
};
