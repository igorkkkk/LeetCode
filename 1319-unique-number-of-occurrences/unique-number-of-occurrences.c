#define SHIFT 1000
#define MAX_SIZE 2001
#define MAX_OCCUR 1001

bool uniqueOccurrences(int* arr, int arrSize) {
    int hash[MAX_SIZE] = {0};
    int hash_occur[MAX_OCCUR] = {0};

    for (int i = 0; i < arrSize; i++)
        hash[arr[i]+SHIFT]++;

    for (int i = 0; i < MAX_SIZE; i++) {
        if (hash[i] > 0) {
            hash_occur[hash[i]]++;
            if (hash_occur[hash[i]] > 1) {
                return false;
            }
        }
    }

    return true;
}