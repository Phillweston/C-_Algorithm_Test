#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * �����ת�������СԪ��
     * 
     * Solution:
     * �ö��ַ�����
     */
    public:
        int minNumberInRotationMatrix(vector<int> nums) {
            int n = nums.size() - 1;
            if (n < 0) return 0;
            while (nums[n] == nums[0] && n > 0) n--;
            
        }
};
