#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * ʵ�ֺ���doublePower(double base, int exponent)����base��exponent�η���
     * ����ʹ�ÿ⺯����ͬʱ����Ҫ���Ǵ������⡣
     * 
     * Solution:
     * ע�⣺nΪ���������
     */
    public:
        double power(double base, int e) {
            double res = 1;
            for (int i = 0; i < abs(e); i++) res *= base;
            if (e < 0) res = 1 / res;
            return res;
        }
};
