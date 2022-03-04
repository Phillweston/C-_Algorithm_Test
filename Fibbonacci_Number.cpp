#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 斐波那契数列，输入一个整数n，输出斐波那契数列的第n项（从0开始，第0项为0）
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
