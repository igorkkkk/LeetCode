int longestPalindrome(char* s) {
    int d[58] = {0};
    int len = 0;
    int result = 0;

    for (int i = 0; s[i] != '\0'; ++i){
        d[s[i]-'A']++;
        len++;
    }
    
    for (int i = 0; i < 58; ++i)
        result += (d[i] / 2) * 2;
    
    if (result < len)
        result++;
    return result;
}