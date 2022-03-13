#include <vector>
#include <unordered_map>
using namespace std;
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    /*
     * Question:
     * ��Ŀ����ת����
     * 
     * Solution:
     * 
     */
    public:
        ListNode* reverseList(ListNode* head) {
            // �ҵ�ǰ���ڵ�
            ListNode *prev = nullptr;
            ListNode *cur = head;
            while (cur) {
                ListNode *next = cur->next;
                // ��ǰ��Ľڵ�ָ��null��Ҳ��������ĩβ��ʾ��
                cur->next = prev;
                // ǰ���ڵ�ָ��ǰ�ڵ㣨��ת�����ԭǰ���ڵ��Ϊ��̽ڵ㣩
                prev = cur;
                // ��ǰ�ڵ������ƶ�һλ
                cur = next;
            }
            return prev;
        }
};
