bool isIsomorphic(char* s, char* t) {
    char *hash_s[128] = {0};
    char *hash_t[128] = {0};
    while (*s && *t) {
        if (hash_s[*s] == NULL && hash_t[*t]==NULL)
            hash_s[*s] = *t, hash_t[*t] = *s;
        else
            if (hash_s[*s] != *t || hash_t[*t] != *s)
                return false;
        s++, t++;
    }
    return true;
}