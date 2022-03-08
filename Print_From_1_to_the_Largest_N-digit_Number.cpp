#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 输入数字n，按顺序打印出从1最大的n位十进制数。
     * 比如输入3，则打印出1、2、3一直到最大的3位数即999
     * 
     * Solution:
     * 注意：需要考虑大数的问题，否则可能会溢出
     * 
     */
    public:
        vector<int> printNumber(int n) {
            char* number = new char[n + 1];
            vector<int> ans;
            memset(number, '0', n);
            number[n] = '\0';
            while (!checkNumber(number, n)) {
                ans.push_back(changeNumber(number, n));
            }
            return ans;
        }
        int changeNumber(char* number, int n) {
            int res = 0;
            for (int i = 0; i < n; i++) {
                res = res * 10 + number[i] - '0';
            }
            return res;
        }
        bool checkNumber(char* number, int n) {
            // 注意这里要判断输入字符串是否溢出
            int nLength = n;
            bool isOverFlow = 0;
            int isTakenOver = 1;
            for (int i = nLength - 1; i >= n; i--) {
                number[i] += isTakenOver;
                if (number[i] > '9') {
                    if (i == 0) {
                        isOverFlow = 1;
                        break;
                    }
                    number[i] = '0';
                    isTakenOver = 1;
                }
                else {
                    isTakenOver = 0;
                }
            }
            return isOverFlow;
        }
};
