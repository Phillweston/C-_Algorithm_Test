#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * ��ʵ��һ������������һ��������������������Ʊ�ʾ��1�ĸ�����
     * �����9��ʾ�ɶ�������1001����2λ��1������������9���ú������2��
     * �����ò����ʾ
     * 
     * Solution:
     * 
     */
    public:
        int NumberOf1(unsigned int n) {
            int count = 0;
            while(n) {
                if (n & 1) count++;
                n >> 1;
            }
            return count;
        }
};
