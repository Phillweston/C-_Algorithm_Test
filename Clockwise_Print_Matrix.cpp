#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 输入一个矩阵，按照从外向里顺时针顺序依次打印出每一个数字
     * 
     * Solution:
     * 
     */
    public:
        vector<int> printMatrix(vector<vector<int>> matrix) {
            vector<int> result;
            if (matrix.empty()) return result;
            int n = matrix.size(), m = matrix[0].size();
            // 注意这里的二维容器定义方式：初始化一个 二维vector 行row,列column ,且 值为data=6 自定义data;
            // vector<vector> visited(row,vector(column,6));
            vector<vector<bool>> state(n, vector<bool>(m, false));
            // 定义前进的方向
            int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
            // x代表行，y代表列，d代表前进的方向，初始方向为向右
            int x = 0, y = 0, d = 1;
            for (int i = 0; i < n * m; i ++) {
                result.push_back(matrix[x][y]);
                state[x][y] = true;
                int a = x + dx[d], b = y + dy[d];
                if (a < 0 || a >= n || b < 0 || b >= m || state[a][b] == true) {
                    // 满足换向条件：a或b达到边界或碰到之前访问过的元素
                    d = (d + 1) % 4;
                    a = x + dx[d], b = y + dy[d];
                }
                x = a, y = b;
            }
            return result;
        }
};
