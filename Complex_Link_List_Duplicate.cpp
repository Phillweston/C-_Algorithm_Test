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
     * ��ʵ�ֺ���ComplexListNode* Clone(ComplexListNode* pHead)������һ����������
     * �ڸ��������У�ÿ����������һ��m_pNextָ��ָ����һ������⣬����һ��m_pSiblingָ�������е����������NULL��
     * ����C++�������£�
     * 
     * Solution:
     * �����Ϊ����
     * 1. �ھ������д�����������ʱ��������������ֵܽ��
     * 2. ���ݾ�������ֵܽ�㣬��ʼ����������ֵܽ��
     * 3. �Ӿ������в�ֵõ�������
     */
    public:
        
};
