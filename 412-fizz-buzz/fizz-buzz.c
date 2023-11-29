/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** result = (char**)malloc(n * sizeof(char*));
    *returnSize = n;

    for (int i = 0; i < n; i++){
        result[i] = (char*)malloc(sizeof(char)*9);
        int num = i+1;
        if ((num % 3 == 0) && (num % 5 == 0))
            strcpy(result[i], "FizzBuzz");
        else if (num % 3 == 0)
            strcpy(result[i], "Fizz");
        else if (num % 5 == 0)
            strcpy(result[i], "Buzz");
        else
            sprintf(result[i], "%d", num);
    }
    
    return result;
}
