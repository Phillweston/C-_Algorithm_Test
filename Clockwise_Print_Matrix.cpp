#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * ����һ�����󣬰��մ�������˳ʱ��˳�����δ�ӡ��ÿһ������
     * 
     * Solution:
     * 
     */
    public:
        vector<int> printMatrix(vector<vector<int>> matrix) {
            vector<int> result;
            if (matrix.empty()) return result;
            int n = matrix.size(), m = matrix[0].size();
            // ע������Ķ�ά�������巽ʽ����ʼ��һ�� ��άvector ��row,��column ,�� ֵΪdata=6 �Զ���data;
            // vector<vector> visited(row,vector(column,6));
            vector<vector<bool>> state(n, vector<bool>(m, false));
            // ����ǰ���ķ���
            int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
            // x�����У�y�����У�d����ǰ���ķ��򣬳�ʼ����Ϊ����
            int x = 0, y = 0, d = 1;
            for (int i = 0; i < n * m; i ++) {
                result.push_back(matrix[x][y]);
                state[x][y] = true;
                int a = x + dx[d], b = y + dy[d];
                if (a < 0 || a >= n || b < 0 || b >= m || state[a][b] == true) {
                    // ���㻻��������a��b�ﵽ�߽������֮ǰ���ʹ���Ԫ��
                    d = (d + 1) % 4;
                    a = x + dx[d], b = y + dy[d];
                }
                x = a, y = b;
            }
            return result;
        }
};
