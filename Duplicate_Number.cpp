#include <algorithm>
using namespace std;
class solution {
    /*
     * Solution:
     * 找到numbers[i]和numbers[numbers[i]]是否相等，若相等则互换对应的位置
     * 对换之后就可以看出来是否存在相等的值
     */
    public:
        bool duplicate(int numbers[], int length, int* output) {
            for (int i = 0; i < length; i++) {
                while (numbers[i] != i) {
                    if(numbers[i] == numbers[numbers[i]]) {
                        output[0] = numbers[i];
                        return true;
                    }    
                    else
                        swap(numbers[i], numbers[numbers[i]]);
                }
            }
            return false;
        }
};
