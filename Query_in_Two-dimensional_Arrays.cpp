#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 题目：在一个二维数组中，每一行都按照从左到右递增的顺序排序，一列都按照从上到下递增的顺序排序。
     * 请完成一个函数，输入这样的一二维数组和一个整数，判断数组中是否含有该整数。
     * 
     * Solution:
     * 二维数组从左上到右下折线拐角处数字是这一行从起始开始到拐角处最大的，也是从这一列从拐角开始到底下最小的
     * 先从最右上角的元素开始看，如果该值比目标值小，则往下一行看，
     * 如果该值比目标值大，则往前一列看
     */
    public:
        bool Find(int target, vector<vector<int>> array) {
            if (array.empty() || array[0].empty())
                return false;
            int i = 0, j = array[0].size() - 1;
            while (i < array.size() && j >= 0) {
                if (array[i][j] == target)
                    return true;
                else if (array[i][j] > target)
                    j--;
                else
                    i++;
            }
            return false;
        }
};
