#include <vector>
using namespace std;
struct ComplexListNode {
    int val;
    struct ComplexListNode *next;
    struct ComplexListNode *random;
    ComplexListNode(int x): val(x), next(NULL), random(NULL) {}
};
class solution {
    /*
     * Question:
     * 请实现函数ComplexListNode* Clone(ComplexListNode* pHead)，复制一个复杂链表。
     * 在复杂链表中，每个结点除了有一个m_pNext指针指向下一个结点外，还有一个m_pSibling指向链表中的任意结点或者NULL。
     * 结点的C++定义如下：
     * 
     * Solution:
     * 具体分为三步
     * 1. 在旧链表中创建新链表，此时不处理新链表的兄弟结点
     * 2. 根据旧链表的兄弟结点，初始化新链表的兄弟结点
     * 3. 从旧链表中拆分得到新链表
     */
    public:
        
};
