#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 쳲��������У�����һ������n�����쳲��������еĵ�n���0��ʼ����0��Ϊ0��
     * 
     * Solution:
     * f(n) = f(n-1) + f(n-2)
     */
    public:
        int Fibonacci(int n) {
            if (n == 0) return 0;
            else if (n == 1) return 1;
            int first = 0, second = 1;
            int res = 0;
            for (int i = 1; i < n; i++) {
                res = first + second;
                first = second;
                second = res;
            }
            return res;
        }
};
