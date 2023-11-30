inline int charToNum(char c) {
    return (int)(c - '0');
}

inline char intToChar(int d) {
    return (char)(d % 10) + '0';
}

char* addStrings(char* num1, char* num2) {
    size_t len1 = strlen(num1);
    size_t len2 = strlen(num2);
    size_t max_len = len1 > len2 ? len1 : len2;
    size_t min_len = len1 < len2 ? len1 : len2;
    char* res = (char*)malloc(sizeof(char)*(max_len+2));
    bool carry = 0;
    int i = 0;

    res[max_len+1] = 0;
    
    for(; i < min_len; i++) {
        int num = charToNum(num1[len1 - i - 1]) + charToNum(num2[len2 - i - 1]);
        num +=  carry;
        res[max_len - i] = intToChar(num);
        carry = num >= 10 ? 1 : 0;
    }

     char * longest_str = len1 > len2 ? num1 : num2;
     for(; i < max_len; i++) {
        int total = charToNum(longest_str[max_len - i - 1]) + carry;
        res[max_len - i] = intToChar(total);
        carry = (total >= 10) ? 1 : 0; 
    }

    if(carry) {
        res[0] = '1';
    } else {
        for (int j = 1; j <= max_len + 1; j++)
        {
            res[j-1] = res[j];
        }
    }
    return res;

}