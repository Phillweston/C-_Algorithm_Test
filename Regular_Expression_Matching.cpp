#include <vector>
using namespace std;
class solution {
    /*
     * Question:
     * 
     * 
     * Solution:
     * *: 0:~
     */
    public:
        bool match(char* str, char* pattern) {
            // ÅĞ¶Ï×Ö·û´®±ß½ç
            if (*str == '\0' && *pattern == '\0')
                return true;
            else if (*str != '\0' && *pattern == '\0')
                return false;
            if (*(pattern + 1) != '*') {    //Æ¥Åäµ±Ç°×Ö·û
                if (*str == *pattern || (*str != '\0' && *pattern == '.'))       // str: any  pattern: .
                    return match(str + 1, pattern + 1);
                else {
                    return false;
                }
            }
            else {
                if (*str == *pattern || (*str != '\0' && *pattern == '.'))
                    // strÍùºóÒÆ¶¯¼¸Î»
                    return match(str, pattern + 2) || match(str + 1, pattern);
                else
                    return match(str, pattern + 2);
            }
            return true;
        }
};
