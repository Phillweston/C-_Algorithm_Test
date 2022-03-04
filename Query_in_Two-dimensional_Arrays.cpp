#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * ��Ŀ����һ����ά�����У�ÿһ�ж����մ����ҵ�����˳������һ�ж����մ��ϵ��µ�����˳������
     * �����һ������������������һ��ά�����һ���������ж��������Ƿ��и�������
     * 
     * Solution:
     * ��ά��������ϵ��������߹սǴ���������һ�д���ʼ��ʼ���սǴ����ģ�Ҳ�Ǵ���һ�дӹսǿ�ʼ��������С��
     * �ȴ������Ͻǵ�Ԫ�ؿ�ʼ���������ֵ��Ŀ��ֵС��������һ�п���
     * �����ֵ��Ŀ��ֵ������ǰһ�п�
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
