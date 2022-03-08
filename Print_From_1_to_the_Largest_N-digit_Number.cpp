#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * ��������n����˳���ӡ����1����nλʮ��������
     * ��������3�����ӡ��1��2��3һֱ������3λ����999
     * 
     * Solution:
     * ע�⣺��Ҫ���Ǵ��������⣬������ܻ����
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
            // ע������Ҫ�ж������ַ����Ƿ����
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
