#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 实现函数doublePower(double base, int exponent)，求base的exponent次方。
     * 不得使用库函数，同时不需要考虑大数问题。
     * 
     * Solution:
     * 注意：n为负数的情况
     */
    public:
        double power(double base, int e) {
            double res = 1;
            for (int i = 0; i < abs(e); i++) res *= base;
            if (e < 0) res = 1 / res;
            return res;
        }
};
