int comp(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

char findTheDifference(char* s, char* t) {
    int len_t = strlen(t);
    qsort(t, strlen(t), sizeof(char), comp);
    qsort(s, strlen(s), sizeof(char), comp);
        for(int i = 0; i <len_t; i++)
            if (s[i] != t[i])
                return t[i];
        return t[len_t-1];
}