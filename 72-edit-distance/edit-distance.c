#include <stdlib.h>
#include <string.h>

#define MIN(x, y) ((x) < (y) ? (x) : (y))
#define MAX(x, y) ((x) > (y) ? (x) : (y))

int minDistance(char* word1, char* word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);

    if (!len1) return len2;
    if (!len2) return len1;

    int** dp = (int**)malloc(sizeof(int*) * (len1 + 1));
    for (int i = 0; i <= len1; i++)
        dp[i] = malloc(sizeof(int) * (len2 + 1));

    for (int i = 0; i <= len1; i++)
        for (int j = 0; j <= len2; j++)
            if(MIN(i, j) == 0)
                dp[i][j] = MAX(i,j);
            else if (word1[i-1] == word2[j-1])
                dp[i][j] = dp[i-1][j-1];
            else
                dp[i][j] = 1+MIN(dp[i-1][j], MIN(dp[i][j-1], dp[i-1][j-1]));

    int dist = dp[len1][len2];

    for (int i = 0; i <= len1; i++)
        free(dp[i]);
    free(dp);

    return dist;
}