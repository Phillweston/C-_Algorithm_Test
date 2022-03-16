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
     * 题目：输入两个单调递增的链表，输出两个链表合成后的链表（单调不减原则）。
     * 
     * Solution:
     * 
     */
    public:
        ListNode* Merge (ListNode* p1, ListNode* p2) {
            // 归并思想
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
