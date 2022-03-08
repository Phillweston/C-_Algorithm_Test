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
            int l = 0, r = n;
            while (l < r) {
                int mid = l + r >> 1;
                if (nums[mid] < nums[0]) r = mid;
                else l = mid + 1;
            }
            return nums[r];
        }
};
