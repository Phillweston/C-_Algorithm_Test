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
     * 题目：输入一个链表，输出该链表中倒数第k个结点。
     * 为了符合大多人的习惯，本题从1开始计数，即链表的尾结点是倒数第1个结点。
     * 一个链表有6个结点，从头结点开始它们的值依次是1、2、3、4、5、6。
     * 这个链表的倒数第3个结点是值为4的结点。
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
