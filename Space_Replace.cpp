class solution {
    /*
     * Question:
     * ��ʵ��һ�����������ַ����е�ÿ���ո��滻��"��20"��
     * ����"We are happy."�������"We%20are%20happy."
     * 
     * Solution:
     * �ո�ԭ����һ���ַ�������%20�൱�ڶ��������ַ������count��Ҫx2
     * �ַ����Ӻ���ǰ������ֹ�����ظ��滻����
     */
    public:
        void replaceSpaces(char* str, int length) {
            int count = 0;
            for (int i = 0; i < length; i++) {
                if (str[i] == ' ')
                    count++;
            }
            for (int i = length - 1; i >= 0; i) {
                if (str[i] != ' ')
                    str[i + count * 2] = str[i];
                else if (str[i] == ' ') {
                    str[i + count * 2] = '%';
                    str[i + count * 2 + 1] == '2';
                    str[i + count * 2 + 2] == '0';
                }
            }
        }
};
