#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 请实现一个函数，输入一个整数，输出该数二进制表示中1的个数。
     * 例如把9表示成二进制是1001，有2位是1。因此如果输入9，该函数输出2。
     * 负数用补码表示
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
