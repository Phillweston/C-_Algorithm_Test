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
     * 输入一个链表，按链表从尾到头的顺序返回一个ArrayList
     * 
     * Solution:
     * rbegin相当于逆序输出，rend相当于逆序结束，也就是vector起始的元素
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
