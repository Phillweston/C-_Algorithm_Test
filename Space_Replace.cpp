class solution {
    /*
     * Question:
     * 请实现一个函数，把字符串中的每个空格替换成"％20"。
     * 例如"We are happy."，则输出"We%20are%20happy."
     * 
     * Solution:
     * 空格原本是一个字符，多了%20相当于多了两个字符，因此count需要x2
     * 字符串从后往前遍历防止出现重复替换问题
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
