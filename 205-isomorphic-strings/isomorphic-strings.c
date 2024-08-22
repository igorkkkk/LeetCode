bool isIsomorphic(char* s, char* t) {
    char hash_s[128] = {0};
    char hash_t[128] = {0};
    int i = 1;
    while (*s && *t) {
        if (hash_s[*s] != hash_t[*t])
            return false;
        
        hash_s[*s] = i;
        hash_t[*t] = i;
        s++, t++, i++;
    }
    return true;
}