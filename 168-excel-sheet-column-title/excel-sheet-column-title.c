char* convertToTitle(int columnNumber) {
    static char res[15];
    int length = 14;
    res[length] ='\0';
    while(columnNumber) 
    {
        res[--length] = 'A'+ --columnNumber%26;
        columnNumber/=26;
    }
    return res+length;
}