#include <algorithm>
using namespace std;
class solution {
    /*
     * Solution:
     * �ҵ�numbers[i]��numbers[numbers[i]]�Ƿ���ȣ�������򻥻���Ӧ��λ��
     * �Ի�֮��Ϳ��Կ������Ƿ������ȵ�ֵ
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
