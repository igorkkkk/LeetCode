int longestPalindrome(char* s) {
    int d[58] = {0};
    int len = strlen(s);
    int result = 0;

    for (int i = 0; i < len; ++i)
        d[s[i]-'A']++;
    
    for (int i = 0; i < 58; ++i)
        result += (d[i] / 2) * 2;
    
    if (result < len)
        result++;
    return result;
}