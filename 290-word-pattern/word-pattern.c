bool wordPattern(char* pattern, char* s) {
    char *hash[26] = {0};
    const char *delim = " ";
    char *token;
    int i = 0;

    token = strtok(s, delim);
    while (token != NULL) {
        if (pattern[i] == '\0')
            return false;

        if (hash[pattern[i] - 'a'] == NULL) {
            for (int j = 0; j < 26; j++)
                if (hash[j] != NULL && strcmp(token,hash[j])==0)
                    return false;
            hash[pattern[i] - 'a'] = token;
        }
        else
            if (strcmp(token, hash[pattern[i] - 'a']) != 0)
                return false;

        token = strtok(NULL, delim);
        i++;
    }

    if (pattern[i] != '\0')
        return false;

    return true;
}